/*
 *	open() for +3DOS
 *
 *	djm 17/3/2000
 *
 *      Access is either
 *
 *      O_RDONLY = 0
 *      O_WRONLY = 1    Starts afresh?!?!?
 *      O_APPEND = 256
 *
 *	+3 notes:
 *	Open a file for reading - e=1 d=0
 *	Open a file for writing - e=4, d=2 (creat)
 *	Open a file for append  - e=2, d=2
 *
 *	$Id: open.c,v 1.2 2002-06-17 17:21:50 dom Exp $
 */

#include <fcntl.h>      /* Or is it unistd.h, who knows! */
#include <spectrum.h>

int open(far char *name, int flags, mode_t mode)
{                                      
#asm
	XREF	dodos
	ld	ix,0
	add	ix,sp
	ld	a,(ix+3)	;mode high
	and	a
	jr	nz,ck_append
	ld	a,(ix+2)
	and	a
	ld	de,1		;read mode
	jr	z,open_it
	ld	de,1026		;write mode
	dec	a
	jr	z,open_it
.open_abort
	ld	hl,-1		;invalid mode
	scf
	ret
.ck_append
	dec	a
	jr	nz,open_abort
	ld	a,(ix+2)
	and	a
	jr	nz,open_abort	;cant have low byte set
	ld	de,512		;append mode
.open_it
	push	de
	call	findhand
	pop	de
	jr	c,open_abort
	push	hl
	ld	b,l		;b=file number
	ld	c,3		;exclusive read/write - who cares?
	ld	l,(ix+6)	;filename
	ld	h,(ix+7)
	ld	iy,262		;DOS_OPEN
	call	dodos
	pop	hl
	jr	nc,open_abort	;error
#endasm
}







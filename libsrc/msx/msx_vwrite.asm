;
;	MSX specific routines
;
;	GFX - a small graphics library 
;	Copyright (C) 2004  Rafael de Oliveira Jannone
;
;	extern void msx_vwrite(void *source, u_int dest, u_int count)
;
;	Transfer count bytes from RAM to VRAM (BIOS paged version)
;
;	$Id: msx_vwrite.asm,v 1.6 2009-05-21 06:58:11 stefano Exp $
;


	XLIB	msx_vwrite
	
	LIB     msxbios
	
IF FORmsx
        INCLUDE "#msxbios.def"
ELSE
        INCLUDE "#svibios.def"
ENDIF


msx_vwrite:

        ld      ix,2
        add     ix,sp

	ld c, (ix+0)	; count
	ld b, (ix+1)

	ld e, (ix+2)	; dest
	ld d, (ix+3)
	
	ld l, (ix+4)	; source
	ld h, (ix+5)
	
	ld	ix,LDIRVM
	jp	msxbios
	

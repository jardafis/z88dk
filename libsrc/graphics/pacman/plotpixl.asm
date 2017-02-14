;
;       Generic pseudo graphics routines for text-only platforms
;
;       PacMan Hardware port by Stefano Bodrato, 2017
;
;
;       Plot pixel at (x,y) coordinate.
;
;
;	$Id:$
;


			INCLUDE	"graphics/grafix.inc"

                        SECTION code_clib
			PUBLIC	plotpixel

			EXTERN	textpixl
			EXTERN	__gfx_coords
			EXTERN	base_graphics


.plotpixel
			ld	a,h
			cp	maxx
			ret	nc
			ld	a,l
			cp	maxy
			ret	nc		; y0	out of range
			ld	(__gfx_coords),hl

			
			push	bc

			ld	c,a	
			ld	b,h

			push	bc

			srl	b	; x/2
			srl	c	; y/2
			ld  a,c
			
			ld hl,0x401D
			cp  34
			jr	z,hrow
			ld l,0x3D
			cp	35
			jr	z,hrow
			
			ld hl,0x43DD
			xor a
			cp c	; row at 0 position
			jr z,hrow
			ld l,0xFD
			dec c
			jr z,hrow
			
			ld hl,0x43A0
			ld d,0
			ld e,c
			add hl,de
			
;			xor a
			cp b	; column at 0 position
			jr z,address_found
			ld de,0x20
.xpos
			sbc hl,de
			djnz xpos
			jr	address_found
			
.hrow
			xor a
			add b
			jr z,address_found
.xpos2
			dec hl
			djnz xpos2

.address_found
			
			ld	a,(hl)		; get current symbol

			ld	e,a

			push	hl
			ld	hl,textpixl
			ld	e,0
			ld	b,16
.ckmap			cp	(hl)
			jr	z,chfound
			inc	hl
			inc	e
			djnz	ckmap
			ld	e,0
.chfound		ld	a,e
			pop	hl

			ex	(sp),hl		; save char address <=> restore x,y

			ld	b,a
			ld	a,1		; the bit we want to draw
			
			bit	0,h
			jr	z,iseven
			add	a,a		; move right the bit

.iseven
			bit	0,l
			jr	z,evenrow
			add	a,a
			add	a,a		; move down the bit
.evenrow
			or	b

			ld	hl,textpixl
			ld	d,0
			ld	e,a
			add	hl,de
			ld	a,(hl)

			pop	hl
			ld	(hl),a
			
			pop	bc
			ret


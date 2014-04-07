
; ===============================================================
; Dec 2013
; ===============================================================
; 
; void *heap_calloc(void *heap, size_t nmemb, size_t size)
;
; Allocate nmemb * size bytes from the heap and initialize
; that memory to 0.
;
; Returns 0 with carry set on failure.
;
; Returns 0 if nmemb * size == 0 without indicating error.
;
; ===============================================================

INCLUDE "clib_cfg.asm"

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
IF __CLIB_OPT_MULTITHREAD
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XLIB asm_heap_calloc

LIB asm_heap_calloc_unlocked
LIB __heap_lock_acquire, __heap_lock_release_0, error_enolck_zc

asm_heap_calloc:

   ; Allocate zero-initialized memory from a heap
   ;
   ; enter : hl = uint nmemb
   ;         bc = uint size
   ;         de = void *heap
   ;
   ; exit  : success
   ;
   ;            hl = address of allocated memory, 0 if size == 0
   ;            carry reset
   ;
   ;         fail on insufficient memory
   ;
   ;            hl = 0
   ;            carry set, errno = ENOMEM
   ;
   ;         fail on lock acquisition
   ;
   ;            hl = 0
   ;            carry set, errno = ENOLCK
   ;
   ; uses  : af, bc, de, hl

   call __heap_lock_acquire
   jp c, error_enolck_zc
   
   push de                       ; save void *heap
   call asm_heap_calloc_unlocked

   jp __heap_lock_release_0

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ELSE
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

XLIB asm_heap_calloc

LIB asm_heap_calloc_unlocked

asm_heap_calloc:

   jp asm_heap_calloc_unlocked

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
ENDIF
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


INCLUDE "config_private.inc"

SECTION data_align_256

PUBLIC asci0TxBuffer

asci0TxBuffer:   defs __ASCI0_TX_SIZE  ; Space for the Tx Buffer

; pad to next 256 byte boundary

ALIGN 256

SECTION data_driver

PUBLIC asci0TxCount, asci0TxIn, asci0TxOut, asci0TxLock

asci0TxCount:    defb 0                 ; Space for Tx Buffer Management
asci0TxIn:       defw asci0TxBuffer     ; non-zero item in bss since it's initialized anyway
asci0TxOut:      defw asci0TxBuffer     ; non-zero item in bss since it's initialized anyway
asci0TxLock:     defb $FE               ; lock flag for Tx exclusion


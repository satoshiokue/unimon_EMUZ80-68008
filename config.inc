;;; -*- asm -*-
;;;
;;; Universal Monitor 68000 config file (for MEZ68k8)
;;;

;;;
;;; Memory
;;;

ROM_B:	EQU	$00000000

WORK_B:	EQU	$00009F00
STACK:	EQU	$00009FF0
USTACK:	EQU	$00009F00	; USP

BUFLEN:	EQU	24		; Input buffer size
VECSIZ:	EQU	256		; Number of vectors to be initialized

;;;
;;; Options
;;;

USE_IDENT = 1			; MPU Identification
MPU_SPEC = 0			; MPU Spec. (Effective when USE_IDENT=0) 0:MC68000/8 1:MC68010

USE_REGCMD = 1			; R(egister) command and related functions

;;;
;;; Motorola MC6850
;;;

USE_DEV_6850 = 1
	IF USE_DEV_6850
ACIAC:	EQU	$0000E001
ACIAD:	EQU	$0000E000
;CR_V:	EQU	$15		; x16, 8bit, N, 1
	ENDIF

;;;
;;; Motorola MC68681
;;;

USE_DEV_68681 = 0
	IF USE_DEV_68681
DUBASE:	EQU	$00080100
MR1A_V:	EQU	$13		; 8bit, N
MR2A_V:	EQU	$07		; 1
CSRA_V:	EQU	$BB		; 9600 (3.6864MHz)
	ENDIF

;;;
;;; Motorola MC68901
;;;

USE_DEV_68901 = 0
	IF USE_DEV_68901
MFBASE:	EQU	$00080000
UCR_V:	EQU	$88		; x16, 8bit, N, 1
	ENDIF

;;;
;;; EMILY Board (Shared Memory)
;;;

USE_DEV_EMILY = 0
	IF USE_DEV_EMILY
	;;
SMBASE:	EQU	$00001FF0
	ENDIF

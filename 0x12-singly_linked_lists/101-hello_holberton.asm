section .text
	global main
	extern printf


section .data
	format db	"%s", 10, 0
	message db	"Hello, Holberton", 0 ;Oxa-represents newline(\n).

main:
	push	rbp		;points to the base of th current stack frame.
	;; rbp is the register base pointer.This instruction will push the
	;; value of rbp into the stack
	mov	rsi, message	;rsi register source index.
	;; passes, passess second argument to functions. it is the
	;; register destination index.
	mov	rdi, format
	call 	printf
	pop	rbp		;register base pointer.
	ret			;Transfer program execution back to main program

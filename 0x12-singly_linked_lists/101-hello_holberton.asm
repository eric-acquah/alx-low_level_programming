	;;  Declare some constants
	SECTION .data
	msg:	    db      "Hello, Holberton", 10 ; string to print, 10 is newline
	len:	    equ     $ - msg		   ; The length of the string

	;;  Declare the text section
	SECTION .text
	global  main

	;;  The main function
main:
	;;  Prepare the arguments for printf
	mov     rdi, msg	; First argument is the message
	mov     rsi, len	; Second argument is the length
	mov     rax, 0	; No floating point arguments

	;;  Call printf
	call    printf

	;;  Exit the program
	mov     rax, 60	; System call number for exit
	mov     rdi, 0	; Exit code 0
	syscall	; Invoke the kernel

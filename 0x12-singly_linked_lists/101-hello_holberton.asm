	;print text to standard output

	section .data
	str db "Hello, Holberton", 0 ;str = variable that holds the string
	specifier db "%s", 10, 0     ;specifier = format string specifier

	section .text
	extern printf		;printf is an external function to this program

	global main		;main = label that marks entery point of progam
	main:
	sub rsp, 8		;allocate 8bytes to stack pointer

	mov rdi, specifier	;loading specifier as arg to printf
	mov rsi, str		;loading str as the other argument to printf
	xor rax, rax		;clears 'rax' register to 0
	call printf		;make a call to printf

	add rsp, 8		;dellocate the 8bytes allocated before

	mov eax, 0x60		;perform a graceful exit of the program
	xor edi, edi
	syscall			;invoke the system call

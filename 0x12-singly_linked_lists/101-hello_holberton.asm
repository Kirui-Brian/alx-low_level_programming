section .data
	hello db 'Hello, Holberton', 0xA, 0	; 0xA is the newline character

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, hello
	mov rax, 0	; printf is a varargs function, so we need to clear the vector register
	call printf
	add rsp, 8	; Adjust the stack to remove any potential misalignment
	pop rbp

	; Exit the program
	mov rax, 60         ; syscall: exit
	xor rdi, rdi        ; status: 0
	syscall

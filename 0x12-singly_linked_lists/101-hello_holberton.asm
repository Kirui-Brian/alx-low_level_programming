section .data
	hello db 'Hello, Holberton', 0xA, 0	; 0xA is the newline character

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, hello
	call printf
	pop rbp

	; Exit the program
	mov rax, 60         ; syscall: exit
	xor rdi, rdi        ; status: 0
	syscall

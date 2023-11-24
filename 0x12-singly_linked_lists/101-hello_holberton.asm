extern printf

section .text
	global main

main:
	push rbp
	mov rdi, hello
	mov rax, 0
	call printf
	pop rbp

	; Exit the program
	mov rax, 60         ; syscall: exit
	xor rdi, rdi        ; status: 0
	syscall

section .data
        hello db 'Hello, Holberton', 0xA, 0    ; 0xA is the newline character

extern printf

section .text
	global main

main:
	sub rsp, 8
	mov rdi, format
	mov rax, 0
	call printf
	add rsp, 8

	; Exit the program
	mov rax, 60         ; syscall: exit
	xor rdi, rdi        ; status: 0
	syscall

section .data
        format db 'Hello, Holberton', 0xA, 0    ; 0xA is the newline character

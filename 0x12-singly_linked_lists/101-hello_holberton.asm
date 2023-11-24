section .data
	hello db "Hello, Holberton", 0

section .text
	global _start
	extern printf

_start:
	; Call printf
	mov rdi, hello	; format string
	call printf

	; Exit the program
	mov rax, 60	; syscall number for sys_exit
	xor rdi, rdi	; exit code 0
	syscall

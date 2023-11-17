section .data
	hello db "Hello, Holberton", 0

section .text
	global _start

_start
	; Call printf
	mov rdi, hello	; format string
	mov rax, 0	; syscall number for sys_write
	call printf

	; Exit the program
	mov rax, 60	; syscall number for sys_exit
	xor rdi, rdi	; exit code 0
	syscall

section .text
	; External function declarations
	extern printf

section .bss
	; BSS section for uninitialized data

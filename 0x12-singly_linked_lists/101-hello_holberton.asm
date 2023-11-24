section .data
	hello db "Hello, Holberton", 0

section .text
	global _start

	_start:
		; Call printf function
		mov rdi, hello	; format string
		mov rax, 1	; syscall number for sys_write
		mov rdx, 18	; length of the string
		syscall

		; Exit the program
		mov rax, 60	; syscall number for sys_exit
		xor rdi, rdi	; exit code 0
		syscall

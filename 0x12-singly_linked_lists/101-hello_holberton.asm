section .data
	hello db "Hello, Holberton", 0

section .text
	global print_hello

print_hello:
	; Call write system call (syscall number 1)
	mov rax, 1	; syscall number for sys_write
	mov rdi, 1	; file descriptor 1 is stdout
	mov rsi, hello	; pointer to the string
	mov rdx, 18	; length of the string
	syscall

	ret

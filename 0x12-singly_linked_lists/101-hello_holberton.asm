section .data
msg db 'Hello, Holberton',10

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, msg
	call printf
	pop rbp
	mov rax, 60
	xor rdi, rdi
	syscall

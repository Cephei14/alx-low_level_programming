section .text
	global main
	extern printf

section .data
	greeting db "Hello, Holberton",10
	greeting_len equ $ - greeting

main:
	push rbp
	mov rdi, greeting
	call printf
	pop rbp
	mov rax, 60
	xor rdi, rdi
	syscall

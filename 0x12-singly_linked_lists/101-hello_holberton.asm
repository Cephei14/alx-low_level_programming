section .text
	global main
	extern printf

section .data
	greeting: db "Hello, Holberton",10

main:
	push rbp
	mov edi, greeting
	call printf
	pop rbp
	mov rax, 0
	xor eax, eax
	ret

section .data
	hello db "Hello, Holberton", 0
	format db "%s", 0
	newline db 10, 0

section .text
	global main
	extern printf

main:
	push rbp
	mov rdi, format
	lea rsi, [hello]
	call printf

	mov rdi, format
	lea rsi, [newline]
	call printf
	
	mov rax, 60
	xor rdi, rdi
	syscall

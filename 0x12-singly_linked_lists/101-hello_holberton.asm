section .data
    hello db "Hello, Holberton", 0
    format db "%s", 0

section .text
    global _start

_start:
    ; Call printf
    mov rdi, format
    mov rsi, hello
    xor rax, rax
    call printf

    ; Exit the program
    xor edi, edi
    mov eax, 60
    syscall

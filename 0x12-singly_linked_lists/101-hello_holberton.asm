section .data
    hello db "Hello, Holberton", 0
    len equ $ - hello

section .text
    global _start

_start:
    ; Prepare arguments for the write system call
    mov rax, 1             ; System call number for write
    mov rdi, 1             ; File descriptor 1 (stdout)
    mov rsi, hello         ; Address of the message string
    mov rdx, len           ; Length of the message
    syscall

    ; Exit the program
    xor edi, edi
    mov eax, 60
    syscall

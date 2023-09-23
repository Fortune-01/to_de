section .data
    hello db 'Hello, Holberton',0xA  ; The string to print, followed by a newline character (0xA)
    hello_len equ $ - hello           ; Calculate the length of the string

section .text
    global _start

_start:
    ; File descriptor for STDOUT (1)
    mov rdi, 1
    
    ; Address of the string to print
    mov rsi, hello
    
    ; Length of the string
    mov rdx, hello_len
    
    ; System call number for write (1)
    mov rax, 1
    
    ; Invoke the syscall
    syscall

    ; Exit the program
    mov rax, 60       ; System call number for exit
    xor rdi, rdi      ; Exit status (0)
    syscall


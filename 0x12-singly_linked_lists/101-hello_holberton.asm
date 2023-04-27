section .data
    hello db "Hello, Holberton",0x0a,0
    format db "%s"

section .text
    global main
    extern printf

main:
    ; Push the format string onto the stack
    push format
    ; Push the address of the hello string onto the stack
    push hello
    ; Call printf
    call printf
    ; Clean up the stack (remove the arguments)
    add rsp, 16
    ; Return 0
    mov eax, 0
    ret

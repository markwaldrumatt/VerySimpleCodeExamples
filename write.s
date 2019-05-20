.data
hello:
        .string "Hello\n"

.globl  main
main:
    movl $4, %eax
    movl $0, %ebx
    movl $hello,%ecx
    movl $6,%edx
    int $0x80

    ret
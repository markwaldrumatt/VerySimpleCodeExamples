# hello.s 
.section .data
message: .string "Hello Mark!\n"

.section .text

# Export the entry point to the ELF Linker or loader. The conventional
#  default entry point is "_start".  Use "ld -e foo" to override the default.
.global _start

# Linker puts the entry point here:
_start:
    movl $4, %eax  # the linux kernel command to print out a string   i.e. sys_write 
    movl $1, %ebx  # the file descriptor  i.e. stdout 
    movl $message, %ecx  $ move the string to be printed out 
    movl $12, %edx  # the length of the string to print out 
    int $0x80       # wake up kernel to run the print string command  i.e. sys_write 

                    # A segfault will occur if the following exit code is not present 
    movl $0, %ebx  # the return status 
    movl $1, %eax  # the sys_exit call number 
    int $0x80      # call kernel.  This interrupt will not return 
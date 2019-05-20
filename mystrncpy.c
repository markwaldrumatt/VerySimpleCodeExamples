//  gcc -g -O0 -m32 -o mystrncpy mystrncpy.c 
#include <stdio.h>
#include <string.h> 

int main(int argc, char *argv[])
{
    char *src = "astring";
    char dest[4];
    int n = 3;

    // memset(dest,'\0',sizeof(dest));

    if (n!=0)
    {
        char *d = dest; 
        char *s = src; 

        do {
            if ((*d++ = *s++) == 0) {
                /* NULL pad the remaining n-1 bytes */
                while (--n){
                    *d++ = 0;
                }
                break;
            }
        } while (--n);
    }

    printf("Final copied string : %s\n", dest);

    return 0;
}
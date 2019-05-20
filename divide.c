// gcc -g -O0 -m32 -o divide divide.c
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int top = 12; 
    int bottom = 4; 
    int answer, ans2; 

    answer = top / bottom; 

    printf("top/bottom = %d\n", answer); 

    // ans2 = (answer - (answer+1)) / 2; 
    // printf("(answer - (answer+1))/1 = %d\n", ans2);
    ans2 = answer / 2; 
    printf("answer / 2 = %d\n", ans2);

    return 0;
}
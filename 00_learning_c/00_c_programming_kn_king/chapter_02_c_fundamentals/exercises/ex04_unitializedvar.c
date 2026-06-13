/**
 * 4. Write a program that declared several int and float variables(Without initializing them) and then print their values. Is there any pattern to the values? (Usually there isn't)
 */

#include <stdio.h>

int main(void)
{
    int a, b, c, d, e;
    float fa, fb, fc, fd, fe;

    printf("Integer unitialized values: \n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e);
    printf("Float unitialized variables: \n%f\n%f\n%f\n%f\n%f\n",fa,fb,fc,fd,fe);
    return 0;
}

/**
 * The answer was 0 in all variables. Maybe there weren't values in buffer. BUT, I receive a message from the compiler:
 * "message": "‘a’ is used uninitialized [-Wuninitialized]",
 */
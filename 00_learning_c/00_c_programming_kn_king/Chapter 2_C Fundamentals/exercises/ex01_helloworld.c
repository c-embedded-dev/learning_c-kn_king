/**
 * 1. Create and run Kernighan and Ritchie's famous "hello, world" program:
 * 
 * #include <stdio.h>
 * 
 * int main(void)
 * {
 *      printf("hello, world\n");
 * }
 * Do you get a warning message from the compiler? If so, what's needed to make it go away?
*/

#include <stdio.h>

int main(void)
{
    printf("hello, world\n");
}

/**
 * I don't get a warning message because I am using a recent version of C, but is missing the return 0 value, above C99, the compiler asumes an implicit "return 0; if no return is specified"
*/
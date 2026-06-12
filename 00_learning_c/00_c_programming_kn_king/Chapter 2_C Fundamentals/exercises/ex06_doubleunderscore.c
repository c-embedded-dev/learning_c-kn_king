/**
 * Why is it not a good idea for an identifier to contain more than one adjacent underscore (as in current__balance, for example)?
 * 
 * Because are reserved for uses within the library, and may cause that the program could not be ported.
*/

#include <stdio.h>

int main(void)
{
    int double__underscore = 1;
    printf("%d", double__underscore);
    return 0;
}

/**
 * But the compiler says everything is okay
 */
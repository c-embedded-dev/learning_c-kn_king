/**
 * We discussed using the expression sizeof(a) / sizeof(a[0]) to calculate the number of elements in an array. The expression sizeof(a) / sizeof(t), where t is the type of a's elements, would also work, but it's considered an inferior technique. Why?
 * 
 * It is considered inferior because if we have the sizeof(t) and we change the data type of it, we will need to modify every line that contains it manually. Whereas if we have sizeof(a[0]), that size value is assigned by the type of value of the array, is self-contained.
 */

#include <stdio.h>

int main(void)
{
    int size;
    //Change the value type here
    int a[50] = {0};

    size = sizeof(a) / sizeof(a[0]);
    printf("sizeof(a[0])\tThe size of the array is: %d\n", size);
    size = sizeof(a) / sizeof(int); //Here we should make changes if we modify the value type.
    printf("sizeof(int)\tThe size of the array is: %d\n", size); 
    //We get the warning "expression does not compute the number of elements in this array; element type is ‘long long int’, not 'int'"" when changed value type.
}
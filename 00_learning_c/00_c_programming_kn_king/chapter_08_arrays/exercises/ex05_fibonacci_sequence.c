/**
 * The Fibonacci number are 0, 1, 1, 2, 3, 5, 8, 13, ..., where each number is the sum of the two preceding numbers. Write a program fragment that declares an array named fib_numbers of lenght 40 and fills the array with the first 40 Fibonacci numbers. Hint: Fill in the first two numbers individually, then use a loop to compute the remaining numbers.
*/

#include <stdio.h>
#define LENGHT 40
int main(void)
{
    int fib_numbers[LENGHT]={0, 1};
    for (int i = 0; i < LENGHT; i++)
{
    if (i>1)
    {
        fib_numbers[i] = fib_numbers[i-1] + fib_numbers[i-2];
    }
    printf("%d\n", fib_numbers[i]);
}
    return 0;
}
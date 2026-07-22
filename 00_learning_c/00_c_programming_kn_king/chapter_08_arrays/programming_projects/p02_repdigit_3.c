/**
 * Modify the repdigit.c program of Section 8.1 so that it prints a table showing how many times each digit appears in the number
*/

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    long long n;
    int digit, occurrences[10];

    printf("Enter a number: ");
    scanf("%lld", &n);
    
    if (n == 0)
    {    
        printf("Your number is zero. \n");
        return 0;
    }
    if (n < 0)
    n *= -1;

    printf("Digit:\t\t0   1   2   3   4   5   6   7   8   9\nOccurreces:\t");
    
    while (n > 0) 
    {
        digit = n % 10;
        occurrences[digit]++;
        n /= 10;
    }

    for(int i = 0; i < 10; i++)
    {
        printf("%-4d", occurrences[i]);
    }
    printf("\n");
    return 0;
}
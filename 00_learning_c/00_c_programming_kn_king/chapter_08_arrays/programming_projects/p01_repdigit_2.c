/**
 * Modify the repdigit.c program of Section 8.1 so that it shows which digits (if any) were repeated:
 * Enter a number: 939577
 * Repeated digit(s): 7 9
*/

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool digit_seen[10] = {false}, rep = false, repnumber[10] = {false};
    int digit;
    long long n;

    printf("Enter a number: ");
    scanf("%lld", &n);

    if (n == 0)
    {    
        printf("Your number is zero. \n");
        return 0;
    }
    if (n < 0)
    n *= -1;
    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit])
        {
            if (!rep)
            {
                printf("Repeated digit(s): ");
                rep = true;
            }
            repnumber[digit] = true;
        if (n == 0)
        break;
        }
        digit_seen[digit] = true;
        n /= 10;
    }
    
    for(int i = 0 ; i < 10 ; i++)
    {
        if(repnumber[i])
        printf ("%d ", i);
    } 
    printf("\n");
    return 0;
}
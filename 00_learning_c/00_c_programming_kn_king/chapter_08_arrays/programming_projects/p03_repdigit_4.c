/**
 * Modify the repdigit.c program of Section 8.1 so that the user can enter more than one number to be tested for repeated digits. The program should terminate when the user enters a number that's less than or equal to 0.
*/

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    long long n;
    int digit;
    bool digit_seen[10] = {false}, seen = false;

    printf("Enter 0 or a negative number to terminate the program.\nEnter a number: ");
    scanf("%lld", &n);

    //First fail condition.
    if(n <= 0)
    {
        printf("Program terminated.\n");
        return 0;
    }


    while (n > 0) 
    {
        digit = n % 10;
        if (digit_seen[digit])
        {
            seen = true;
        }
        digit_seen[digit] = true;
        if ((n / 10) != 0)
        {
            n /= 10;
            continue;
        }

        if(seen)
        {
        printf("Repeated digit\n");
        seen = false;
        }
        else
        printf("No repeated digit\n");

        printf("Enter a number: ");
        scanf("%lld", &n);
        for (int i = 0; i < 10; i++)
        {
            digit_seen[i] = 0;
        }


        if(n <= 0)
        break;
    }

    
}
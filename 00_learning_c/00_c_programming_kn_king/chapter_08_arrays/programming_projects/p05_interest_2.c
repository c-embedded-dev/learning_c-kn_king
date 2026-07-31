/**
 * Modify the interest.c program of Section 8.1 so that it compounds interest monthly instead of anually. The form of the output shouldn't change: the balance should still be shown at annual intervals
 */

#include <stdio.h>

#define NUM_RATES ((int) (sizeof(value)/sizeof(value[0])))
#define INITIAL_BALANCE 100.00f

int main(void)
{
    int low_rate, num_years, year;
    double value[5];


    printf("Enter annual interest rate(in percentage): ");
    scanf("%d", &low_rate);
    printf("Enter number of years: ");
    scanf("%d", &num_years);

    printf("\nYears");
    for (int i = 0; i < NUM_RATES; i++)
    {
        printf("%8d%%", low_rate + i);
        value[i] = INITIAL_BALANCE;
    }

    printf("\n");

    for (year = 1; year <= num_years; year++) 
    {
        printf("%3d     ", year);
            for (int i = 0; i < NUM_RATES; i++) 
            {
                for (int j = 0; j < 12; j++)
                {
                    value[i] *= 1.0 + ((low_rate + i) / 100.0) / 12;
                }
                printf("%8.2f ", value[i]);
            }
        printf("\n");
    }x
    return 0;
}

/**
 * Using the array of Exercise 8, write a program fragmente that computes the average temperature for a month (averaged over all days of the month and all hours of the day).
 */

#include <stdio.h>

#define HOURS 24
#define DAYS 30
int main(void)
{
    const double temperature_readings[DAYS][HOURS] = {0};
    double average, total;

    printf("Day/Time\t");
    for (int i = 0, row = 0, column = 1; i < DAYS; i++)
    {
        while (row < 24)
        {
            printf("%.2d:00\t", row);
            row++;
        }
        printf("\n%d\t\t", column);
            column++;
        for (int x = 0; x < HOURS; x++)
        {
            printf("%.2lf°C\t", temperature_readings[i][x]);
            total += temperature_readings[i][x]; 
        }
    }
    average = total / (DAYS * HOURS);
    printf("\nThe average temperature of the month was %.2lf\n", average);
}
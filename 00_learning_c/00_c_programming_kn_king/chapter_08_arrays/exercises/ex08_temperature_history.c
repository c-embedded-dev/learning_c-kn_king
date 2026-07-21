/**
 * Write a declaration for a two-dimensional array named temperature_readings that stores one month of hourly temperature readings. (For simplicity, assume that a month has 30 days.) The rows of the array should represent days of the month: the columns should represent hours of the day.
 */

#include <stdio.h>

#define HOURS 24
#define DAYS 30
int main(void)
{
    const double temperature_readings[DAYS][HOURS] = {0};
    
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
        }
    }
printf("\n");
}
/**
 * Write a program that reads a 5x5 array of integers and the print the row sums and the column sums:
 * Enter row 1: 8 3 9 0 10
 * Enter row 2: 3 5 17 1 1
 * Enter row 3: 2 8 6 23 1
 * Enter row 4: 15 7 3 2 9
 * Enter row 5: 6 14 2 6 0
 * 
 * Row totals: 30 27 40 36 28
 * Column totals: 34 37 37 32 21
 */

#include <stdio.h>

#define SIZE 5

int main (void)
{

    //Number input
    int square[SIZE][SIZE]= {0};

    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter row %d:\n", i + 1);
        for (int j = 0; j < SIZE; j++)
        {
        scanf("%d", &square[i][j]);
        }
    }
    
    //Number output
    printf("Your square: \n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
        printf("%7d", square[i][j]);
        }
        printf("\n");
    }

    ///////////////////////Sums
    //Rows
    int row_sum[SIZE]={0};
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
        row_sum[i] += square[i][j];
        }
    }
    
    printf("Row totals: \n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%7d", row_sum[i]);
    }
    printf("\n");
    
    //Columns

        int column_sum[SIZE]={0};
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
        column_sum[i] += square[j][i];
        }
    }
    
    printf("Column totals: \n");

    for (int i = 0; i < SIZE; i++)
    {
        printf("%7d", column_sum[i]);
    }
    printf("\n");
}
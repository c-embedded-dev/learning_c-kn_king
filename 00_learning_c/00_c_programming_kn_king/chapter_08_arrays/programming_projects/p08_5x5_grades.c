/**
 * Modify Programming Project 7 so that it prompts for five quiz grades for each of five students, then computes the total score and average score for each student, and the average score, high score and low score for each quiz.
 */

#include <stdio.h>
#include <stdbool.h>

#define SIZE 5

int main (void)
{

    //Score input
    int square[SIZE][SIZE]= {0};

    for (int i = 0; i < SIZE; i++)
    {
        printf("Enter the scores of the student %d:\n", i + 1);
        for (int j = 0; j < SIZE; j++)
        {
        scanf("%d", &square[i][j]);
        }
    }
    
    //////////////////////////////////////////////////////
    ///////////////////////Students///////////////////////
    //////////////////////////////////////////////////////

    int total[5]={0};
    for (int i = 0; i < SIZE; i++)
    {
        printf("Student %d grades: ", i + 1);
        for (int j = 0; j < SIZE; j++)
        {
            printf("%7d", square[i][j]);
        }
        //Total score
        printf("\nStudent %d total score: ", i + 1);
        for (int j = 0; j < SIZE; j++)
        {
            total[i] += square[i][j];
        }
        printf("%d\n", total[i] );
        //Average Score
        printf("Student %d average score: %.1f\n\n", i + 1, (float)total[i]/SIZE);
    }

    //////////////////////////////////////////////////
    ///////////////////////Quiz///////////////////////
    //////////////////////////////////////////////////

    //Avg Score
    int column_sum[SIZE]={0};
    int high[SIZE] = {0}, low[SIZE] = {0};

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            column_sum[i] += square[j][i];
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        high[i] = square [0][i];
        low[i] = square [0][i];
        printf("Average score for quiz %d: ", i + 1);
        printf("%.1f\n", (float)column_sum[i] / SIZE);
        for (int j = 0; j < SIZE; j++)
        {
            if (square[j][i] >= high[i])
            {
                high[i] = square[j][i];
            }
            if (first)
            {
            low [i] = square[j][i];
            first = false;
            }
            if (square[j][i] <= low[i])
            {
                low[i] = square[j][i];
            }
        }
        printf("The highest score was: %d\n", high[i]);
        printf("The lowest score was: %d\n", low[i]);
        first = true;
    }
    printf("\n");
    return 0;
}
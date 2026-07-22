/** Write a program fragmente that declares an 8 x 8 char array named checker_board and then uses a loop to store the following data into the array (one character per array element):
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 * B R B R B R B R
 * R B R B R B R B
 * Hint: The element in row i, column j, should be the letter B if i + j is an even number.
 */

#include <stdio.h>
#include <stdbool.h>

#define SIDE_OF_SQUARE 9

int main(void)
{
    char checker_board[SIDE_OF_SQUARE][SIDE_OF_SQUARE]= {0};
    bool row = false;

    for (int x = 0; x < SIDE_OF_SQUARE; x++)
    {
        for (int y = 0;y < SIDE_OF_SQUARE ;y++)
        {
            if (row == true && y < SIDE_OF_SQUARE)
            {
                checker_board[x][y]='R';
                printf("%c  ", checker_board[x][y]);
                y++;
                checker_board[x][y]='B';
                printf("%c  ", checker_board[x][y]);
            }
            if (row == false && y < SIDE_OF_SQUARE)
            {
                checker_board[x][y]='B';
                printf("%c  ", checker_board[x][y]);
                y++;
                checker_board[x][y]='R';
                printf("%c  ", checker_board[x][y]);
            }
        }
    printf("\n");  
    row == false ? (row = true) : (row = false); 
    }
    
return 0;
}


/* #include <stdio.h>
#include <stdbool.h>

int main(void)
{
    
    int y=0, z = 0;
    bool x = true;
    while (y != 64)
    {
    if (x==0)
    {
        printf("R ");
        x = 1;
    }
    else
    {
        printf("B ");
        x = 0 ;
    }
    z++;
    if (z == 8 && x == 1)
    {
        printf("\n");
        z = 0;
        x = 0;
    }
    else if (z == 8 && x == 0)
    {
        printf("\n");
        z = 0;
        x = 1;
    }
    y++;
}
} */ 
//That was for fun
/**
 * Write a declaration for an 8 x 8 char array named chess_board. Include an initializer that puts the following data into the array (one character per array element):
 * r n b q k b n r
 * p p p p p p p p
 *   .   .   .   .
 * .   .   .   .   
 *   .   .   .   .
 * .   .   .   .
 * P P P P P P P P
 * R N B Q K B N R
 */

#include <stdio.h>
#define CHESS_SIZE 8

int main(void)
{
    const char chess_board[CHESS_SIZE][CHESS_SIZE] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
        {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
        {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
        {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},};

    for (int x = 0; x < CHESS_SIZE; x++)
        {
            for (int y = 0;y < CHESS_SIZE ; y++)
            {
                    printf("%c  ", chess_board[x][y]);
            }
            printf("\n");
        }
    printf("\n");  
}
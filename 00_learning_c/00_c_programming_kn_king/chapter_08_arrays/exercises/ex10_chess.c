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
#define chess_size 8
int main(void)
{
    const char chess_board[chess_size][chess_size] = {
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
        {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
        {' ', '.', ' ', '.', ' ', '.', ' ', '.'},
        {'.', ' ', '.', ' ', '.', ' ', '.', ' '},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},};

    for (int x = 0; x < chess_size; x++)
        {
            for (int y = 0;y < chess_size ; y++)
            {
                    printf("%c  ", chess_board[x][y]);
            }
            printf("\n");
        }
    printf("\n");  
}
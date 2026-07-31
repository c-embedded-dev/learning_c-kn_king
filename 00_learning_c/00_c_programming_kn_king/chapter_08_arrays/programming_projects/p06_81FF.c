/**
 * THe prototypical Internet newbie is a fellow  named BIFFm who has a unique way of writing messages. Here's a ttypical BIFF comuniqué:
 * H3Y DUD3, C 15 R1LLYC00L!!!!!!!!!!
 * Write a "BIFF filter" that reads a message entered by the user and translater it into BIFF-speak:
 * Enter message: Hey dude, C is rilly cool
 * In B1FF-speak: H3Y DUD3, C 15 R1LLY C00L!!!!!!!!!
 * Your program shoul convert the message to upper-case letter, substitute digits for certain letter (A -> 4, B -> 8, E 0 -> 3, I -> 1, O -> 0, S -> 5), and the append 10 or so exclamation marks.
 * Hint: Store the original messahe in an array of characters, then go back trough the array translatin and printing characters one by one.
 */

#include <stdio.h>
#include <ctype.h>

const int EXCLAMATION_MARKS = 10; //Define the amount of exclamation marks that you want.
#define TEXT_SIZE 100

int main(void)
{
    char biff[TEXT_SIZE] = {0};
    int ch = 0, i = 0;
 
    while ((ch = getchar()) != '\n')
    {
        biff[i] = ch;
        i++;
    }

    for (int j = 0; j <= i; j++)
    {
        switch (toupper(biff[j]))
        {
        case 'A': biff[j]= '4'; break;
        case 'B': biff[j]= '8'; break;
        case 'E': biff[j]= '3'; break;
        case 'I': biff[j]= '1'; break;
        case 'O': biff[j]= '0'; break;
        case 'S': biff[j]= '5'; break;
        default: break;
        }
        
    }
    
    for (int j = 0; j <= i; j++)
    {
        printf("%c", toupper(biff[j]));
    }

    //Exclamation marks and finalization.
    for (int k = 0; k < EXCLAMATION_MARKS; k++)
    {
        printf("!");
    }
    printf("\n");
    return 0;
}
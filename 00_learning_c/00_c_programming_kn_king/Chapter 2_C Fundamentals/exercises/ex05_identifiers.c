/**
 * Which of the following are not legal C identifiers?
 * (a) 100_bottles
 * (b) _100_bottles
 * (c) one_hundred_bottles
 * (d) bottles_by_the_hundred_
 * 
 * The only one that is illegal is 100_bottles because an identifier cannot begin with a number
*/

#include <stdio.h>

int main(void)
{
    int /*100_bottles = 100,*/ _100_bottles = 100, one_hundred_bottles = 100, bottles_by_the_hundred = 100;
    printf("How many bottles are there?\n%d\n%d\n%d\n%d", /*100_bottles,*/ _100_bottles, one_hundred_bottles, bottles_by_the_hundred);
    return 0;
}

/**
 * Error: expected an identifier
 * Error: extra text after expected end of number
 */
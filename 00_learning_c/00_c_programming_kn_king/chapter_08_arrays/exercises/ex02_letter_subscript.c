/**
 * The Q&A section shows how to use a letter as an array subscript. Describe how to use a digit(in character form) as a subscript.
*/

#define NUMBERS 10 //Here we can define the size of our array

#include <stdio.h>

int main() {
    int values[NUMBERS] = {0};
    printf("Enter %d numbers: ", NUMBERS);
    
    for (int i = 0; i < NUMBERS; i++) {
        scanf("%d", &values[i]);
    }
    
    char extract;
    printf("Enter the number you want to extract: ");
    scanf(" %c", &extract);

    int index = extract - '0'; //We Substract the value '0' so 0 == 0, 1 == 1, and so on...

    printf("The value at index %d is: %d\n", index, values[index]);
    
    return 0;
}
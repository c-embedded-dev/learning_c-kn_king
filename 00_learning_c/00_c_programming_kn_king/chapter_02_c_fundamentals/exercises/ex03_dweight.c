/**
 * 3. Condense the dweight.c program by (1) replacing the assignments to height, length, and width with initializers and (2) removing the weight variable, instead calculating (volume + 165) / 166 within the last printf. 
*/

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;
    
    height = 50;
    length = 20;
    width = 30;
    volume = height * length * width;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic centimeters): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + 165 ) / 166);

    return 0;
}
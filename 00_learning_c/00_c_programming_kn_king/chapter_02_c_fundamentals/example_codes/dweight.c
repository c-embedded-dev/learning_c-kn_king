/**
 * @file dweight.c
 * @brief computes the dimensional weight of a 50cm * 20cm * 30cm box
 * @author c_embedded_dev
 * @note dimensions are expressed in cm
*/

#include <stdio.h>

int main(void)
{
    int height, length, width, volume, weight;
    
    height = 50;
    length = 20;
    width = 30;
    volume = height * length * width;
    weight = (volume + 165 ) / 166;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic centimeters): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
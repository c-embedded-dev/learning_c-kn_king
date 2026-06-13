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

    printf("Enter height of box in centimeters: ");
    scanf("%d", &height);
    printf("Enter length of box in centimeters: ");
    scanf("%d", &length);
    printf("Enter width of box in centimeters: ");
    scanf("%d", &width);
    volume = height * length * width;
    weight = (volume + 165 ) / 166;

    printf("Volume (cubic centimeters): %ld\n", volume);
    printf("Dimensional weight (pounds): %d\n", weight);

    return 0;
}
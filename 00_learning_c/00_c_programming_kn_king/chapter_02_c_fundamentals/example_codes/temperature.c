/**
 * @file temperature.c
 * @brief converts celsius to fahrenheit
 * @author c_embedded_dev
 * @note first use of a macro definition
*/

#include<stdio.h>

#define FREEZING_POINT 32.0f
#define SCALE_FACTOR (9.0f / 5.0f)

int main(void)
{
    float fahrenheit, celsius;
    
    printf("Enter celsius temperature: ");
    scanf("%f", &celsius);

    fahrenheit = celsius * SCALE_FACTOR + FREEZING_POINT;
    printf("%.2f°C is equivalent to %.2fF\n", celsius, fahrenheit);
    return 0;
}

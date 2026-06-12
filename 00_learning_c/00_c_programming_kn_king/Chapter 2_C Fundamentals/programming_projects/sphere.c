/**
 * Write a program that computes the volume of a sphere with a 10-meter RADIUS, using the formular v=4/3πr³. Write the fraction 4/3 as 4.0f/3.0f. (Try writing it as 4/3. What happens?) Hint: C doesn't have an exponentiation operator, so you'll need to multiply r by itself twice
 * 
 * @file sphere.c
 * @author c_embedded_dev
 * @brief prints the volume of a sphere with a defined RADIUS, PI and RADIUS are defined in the header as macros
 * @note programming project of King's C Book
*/

#include <stdio.h>
#define PI 3.14159f
#define RADIUS 20

int main(void)
{
    printf("The volume of the sphere of %dm radius is: %.2fm³\n", RADIUS, (4.0f/3.0f)*PI*(RADIUS*RADIUS*RADIUS));
    return 0;
}

/**
 * And if I put 4/3 instead is equivalent to 1, because it discards the decimal part, 4/3=1.3333....
*/
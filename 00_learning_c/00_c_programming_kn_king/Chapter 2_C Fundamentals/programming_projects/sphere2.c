/**
 * 3. Modify the program of programming project 2 so that it prompts the user to enter the radius of the sphere
 * 
 * @file sphere2.c
 * @author c_embedded_dev
 * @brief This program now prompts the user to input the sphere radius instead of it being a macro
 * @note programming project of King's C Book
 */

#include <stdio.h>
#define PI 3.14159f

int main(void)
{
    float radius;
    printf("Write the radius of your sphere in cm: ");
    scanf("%f", &radius);
    printf("The volume of your sphere is: %.2fcm³\n", (4.0f/3.0f)*PI*(radius*radius*radius));
    return 0;
}
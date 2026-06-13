/**
 * Write a program that asks the user to enter a value for x and then displays the value of the following polynomial:
 * 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6
 * Hint: C doesn't have an exponentiation operator, so you'll need to multiply x by itself repeatedly in order to computhe the powers of x. (For example, x * x * x is x cubed.)
 * @file polynomial.c
 * @author c_embedded_dev
 * @brief answers a fifth-degree polynomial.
 * @note programming project of King's C Book
*/

#include <stdio.h>

int main(void)
{
int x;
printf("Write a value for x in the following polynomial 3x⁵+2x⁴-5x³-x²+7x-6: ");
scanf("%d", &x);
printf("The answer for the polynomial is: %d\n", 3*x*x*x*x*x + 2*x*x*x*x - 5*x*x*x - x*x + 7*x - 6);
return 0;
}
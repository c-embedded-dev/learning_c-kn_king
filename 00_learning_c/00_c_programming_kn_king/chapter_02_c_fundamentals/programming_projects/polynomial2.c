/**
 * Modify the program of programming project 5 so that the polynomial is evaluated using the following formula:
 * ((((3*x+2)*x-5)*x-1)*x+7)*x-6)
 * Note that the modified program performs fewer multiplications. This technique for evaluating polynomials is known as Horner's Rule.
 * 
 * @file polynomial2.c
 * @author c_embedded_dev
 * @brief answers a fifth-degree polynomial with Horner's Rule.
 * @note programming project of King's C Book
*/

#include <stdio.h>

int main(void)
{
int x, polynomial;
printf("Write a value for x in the following polynomial 3x⁵+2x⁴-5x³-x²+7x-6: ");
scanf("%d", &x);
polynomial = ((((3*x+2)*x-5)*x-1)*x+7) * x-6;
printf("The answer for the polynomial is: %d\n", polynomial);
return 0;
}
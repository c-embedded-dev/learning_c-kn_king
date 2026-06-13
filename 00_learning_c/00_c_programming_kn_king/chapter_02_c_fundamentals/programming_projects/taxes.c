/**
 * Wirte a program that asks the user to enter a dollars-and-cents amount, then displays the amount with 5% tax added:
 * Enter an amount: 100.00
 * With tax added: $105.00
 * 
 * @file taxes.c
 * @author c_embedded_dev
 * @brief Taxes is defined in the header if the user needs another amount
 * @note programming project of King's C Book
*/

#include <stdio.h>
#define TAXES 1.05

int main(void)
{
    double amount, taxed;
    printf("Enter an amount: ");
    scanf("%f", &amount);
    taxed = (amount * TAXES);
    printf("The amount with taxes is: $%.2f\n", taxed);
    return 0;
}
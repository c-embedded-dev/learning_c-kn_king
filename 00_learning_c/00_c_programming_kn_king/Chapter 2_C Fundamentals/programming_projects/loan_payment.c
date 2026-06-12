/**
 * Write a program that calculates the remaining balace on a loan after the first, second, and third monthly payments:
 * Enter amount of loan: 20000.00
 * Enter interest_rate rate: 6.0
 * Enter monthly payment: 386.66
 * 
 * Balance remaining after first payment: $19713.34
 * Balance remaining after second payment: $19425.25
 * Balance remaining after third payment: $19135.71
 * 
 * Display each balance with two digits after the decimal point. Hint: Each month the balance is decreased by the amount of the payment, but increased by the balance times the monthly interest rate. To find the monthly interest rate, convert the interest rate entered by the user to a percentaje and divide it by 12.
 * 
 * @file loan_payment.c
 * @author c_embedded_dev
 * @brief calculates the balance remaining of a loan after the firsts three months
 * @note Programming project of King's C Book
 */

#include <stdio.h>

int main(void)
{
    float loan, month_pay, interest_rate;

    printf("Write your loan amount: ");
    scanf("%f", &loan);

    printf("Enter anual interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &month_pay);

    float month1 = (loan+((interest_rate/100)/12.0f*loan)-month_pay);
    printf("Balance remaining after first payment: %.2f\n", month1);
    float month2 = (month1+((interest_rate/100)/12.0f*month1)-month_pay);
    printf("Balance remaining after second payment: %.2f\n", month2);
    float month3 = (month2+((interest_rate/100)/12.0f*month2)-month_pay);
    printf("Balance remaining after third payment: %.2f\n", month3);

    return 0;
}
/**
 * Write a program that asks the user to enter a U.S.  %d\nollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5 and $1 bills:
 * Enter a  %d\nollar amount: 93
 * $20 bills: 4
 * $10 bills: 1
 *  $5 bills: 0
 *  $1 bills: 3
 * 
 * @file bills_amount.c
 * @author c_embedded_dev
 * @brief shows the user the less amount of bills needed for a transaction
 * @note Programming project of King's C Book, I took some creative liberties with my local currency
*/

#include <stdio.h>

int main(void)
{
int x;
printf("Enter an amount in COP: ");
scanf("%d", &x);
printf("The less amount of bills that you need is:\n");
printf("100.000 COP banknote: %d\n", x / 100000);
x = x - x / 100000 * 100000;
printf("50.000 COP banknote: %d\n", x / 50000);
x = x- x / 50000 * 50000;
printf("20.000 COP banknote: %d\n", x / 20000);
x = x - x / 20000 * 20000;
printf("10.000 COP banknote: %d\n", x / 10000);
x = x - x / 10000 * 10000;
printf("5.000 COP banknote: %d\n", x / 5000);
x = x - x / 5000 * 5000;
printf("2.000 COP banknote: %d\n", x / 2000);
x = x - x / 2000 * 2000;
printf("1.000 COP coins: %d\n", x / 1000);
x = x - x / 1000 * 1000;
printf("500 COP coins: %d\n", x / 500);
x = x - x / 500 * 500;
printf("200 COP coins: %d\n", x / 200);
x = x - x / 200 * 200;
printf("100 COP coins: %d\n", x / 100);
x = x - x / 100 * 100;
printf("50 COP coins: %d\n", x / 50);
x = x -x / 50 * 50;
printf("Not existing in actual currency: %d COP\n", x);
return 0;
}
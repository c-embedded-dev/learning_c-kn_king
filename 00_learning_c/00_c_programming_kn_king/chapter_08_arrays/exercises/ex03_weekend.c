/**
 * Write a declaration of an array name weekend containing seven bool values. Include an initializer that makes the first and last values true; all other values should be false
*/

#include <stdio.h>

#include <stdbool.h>
#include <string.h>
#define DAYS 7

int main(void)
{
    bool weekend[DAYS] = {[0] = true, [DAYS - 1] = true};
    char *weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    for(int i = 0; i < DAYS; i++) {
        printf("%s: %s\n", weekdays[i], weekend[i] ? "Weekend" : "Weekday");
    } 

    return 0;
}
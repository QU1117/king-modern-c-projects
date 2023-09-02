#include <stdio.h>

#define DOLLAR_BILLS_20 20
#define DOLLAR_BILLS_10 10
#define DOLLAR_BILLS_5 5
#define DOLLAR_BILLS_1 1

int main(void)
{
    int dollarAmount;
    int bills20;
    int bills10;
    int bills5;
    int bills1;
    
    printf("Enter a dollar amount: ");
    scanf("%d", &dollarAmount);

    bills20 = dollarAmount / DOLLAR_BILLS_20;
    dollarAmount -= bills20 * DOLLAR_BILLS_20;

    bills10 = dollarAmount / DOLLAR_BILLS_10;
    dollarAmount -= bills10 * DOLLAR_BILLS_10;

    bills5  = dollarAmount / DOLLAR_BILLS_5;
    dollarAmount -= bills5 * DOLLAR_BILLS_5;

    bills1  = dollarAmount / DOLLAR_BILLS_1;
    dollarAmount -= bills1 * DOLLAR_BILLS_5;

    printf("$20 bills: %d\n", bills20);
    printf("$10 bills: %d\n", bills10);
    printf("$5 bills: %d\n", bills5);
    printf("$1 bills: %d\n", bills1);
}

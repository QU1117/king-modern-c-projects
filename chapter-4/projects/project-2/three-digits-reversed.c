#include <stdio.h>

int main(void)
{
    int user_number, first_number, middle_number, last_number;

    printf("Enter a two digit number: ");
    scanf("%d", &user_number);

    first_number  = user_number % 10;
    middle_number = (user_number / 10) % 10;
    last_number   = (user_number / 10) / 10;

    printf("The reversal is %d%d%d\n", first_number, middle_number, last_number);
}

#include <stdio.h>

int main(void)
{
    int user_number, reversal_number, first_number, last_number;

    printf("Enter a two digit number: ");
    scanf("%d", &user_number);

    first_number = user_number % 10;
    last_number  = user_number / 10;

    printf("The reversal is %d%d\n", first_number, last_number);
}

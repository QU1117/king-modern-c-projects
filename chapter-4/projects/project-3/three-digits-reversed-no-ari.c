#include <stdio.h>

int main(void)
{
    int first_number, middle_number, last_number;

    printf("Enter a three digit number: ");
    scanf("%1d%1d%1d", &first_number, &middle_number, &last_number);

    printf("The reversal is %d%d%d\n", last_number, middle_number, first_number);
}

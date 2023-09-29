#include <stdio.h>

int main(void)
{
    int user_number;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d", &user_number);

    printf("In octal, your number is: %d%d%d%d%d\n",
    ((((user_number / 8) / 8 ) / 8) / 8) % 8, 
    (((user_number / 8) / 8 ) / 8) % 8,
    ((user_number / 8) / 8) % 8,
    (user_number / 8) % 8,
    user_number % 8
    );

    return 0;
}

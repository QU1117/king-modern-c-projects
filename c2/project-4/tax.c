#include <stdio.h>
#define TAX (5.0f / 100.0f)

int main(void)
{
    float amount;

    printf("Enter an amount: ");
    scanf("%f", &amount);

    printf("With tax added: $%.2f\n", (TAX * amount) + amount);
}

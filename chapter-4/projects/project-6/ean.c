#include <stdio.h>
int main(void)
{
    int first, second, third, fourth, fifth, sixth, seventh, eighth, ninth, tenth, eleventh, twelfth, total;
    
    printf("Enter the first 12 EAN digits: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &first, &second, &third, 
        &fourth, &fifth, &sixth, &seventh, &eighth, &ninth, &tenth, &eleventh, 
        &twelfth
    );

    total = 3 * (second + fourth + sixth + eighth + tenth + twelfth) + first + 
        third + fifth + seventh + ninth + eleventh
    ;
    
    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    
    return 0;
}

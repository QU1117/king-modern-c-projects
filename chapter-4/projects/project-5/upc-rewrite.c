#include <stdio.h>
int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total;
    
    printf("Enter all 11 UPC digits: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, 
        &j1, &j2, &j3, &j4, &j5
    );

    total = 3 * (d + i2 + i4 + j1 + j3 + j5) + i1 + i3 + i5 + j2 + j4;
    
    printf("Check digit: %d\n", 9 - ((total - 1) % 10));
    
    return 0;
}

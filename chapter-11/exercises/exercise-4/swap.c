#include <stdio.h>

void swap(int *, int *);

int main(void)
{
    int x = 1, y = 2;

    printf("x before swap: %d\ny before swap: %d\n", x, y);

    swap(&x, &y);

    printf("x after swap: %d\ny after swap: %d\n", x, y);

    return 0;
}

void swap(int *p, int *q)
{
    int z = *p, y = *q;
    *p = y;
    *q = z;
}

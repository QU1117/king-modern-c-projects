#include <stdio.h>

void avg_sum(double [], int, double *avg, double *sum);

int main(void)
{
    int n = 3;
    double avg, sum;
    double a[] = {10.0, 9.1, 1.14};

    avg_sum(a, n, &avg, &sum);

    printf("sum: %.2f, avg: %.2f\n", sum, avg);

    return 0;
}

void avg_sum(double a[], int n, double *avg, double *sum)
{
    int i;

    *sum = 0.0;
    
    for (i = 0; i < n; i++)
    {
        *sum += a[i];
    }
    
    *avg = *sum / n;
}

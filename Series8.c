// [ - x + x^2 - x^3 +......to n terms ]
#include <stdio.h>

int main()
{
    int x, n, sum, i, prod = 1;
    printf("\nEnter the value of x and n: ");
    scanf("%d%d", &x, &n);
    sum = 0;
    for (i = 1; i <= n; i++)
    {
        prod *= (-1) * x;
        sum += prod;
    }
    printf("\nThe required sum of the series is : %d", sum);

    return 0;
}

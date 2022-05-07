//  1 + x + x^2 + x^3 +......+ x^n

#include <stdio.h>

int main()
{
    int x, n, sum, i, prod = 1;
    printf("\nEnter the value of x and n: ");
    scanf("%d%d", &x, &n);
    sum = 1;
    for (i = 1; i < n; i++)
    {
        prod *= x;
        sum += prod;
    }
    printf("\nThe required sum of the series is : %d", sum);

    return 0;
}

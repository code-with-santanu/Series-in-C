// [ 1 + x/1! + x^2/2! + x^3/3! +......+ x^n/n! ]

#include <stdio.h>

int main()
{
    int x, n, i, prod = 1, fact;
    float sum;
    printf("\nEnter the value of x and n: ");
    scanf("%d%d", &x, &n);
    sum = 1;
    fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
        prod *= x;
        sum += (float)prod / (float)fact;
    }
    printf("\nThe required sum of the series is : %.2f", sum);

    return 0;
}

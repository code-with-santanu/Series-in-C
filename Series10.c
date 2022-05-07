// [ x/1! - x^3/3! - x^5/5! - ....to n terms ]

#include <stdio.h>

int main()
{
    int x, n, i, prod, fact, j;
    float sum;
    printf("\nEnter the value of x and n: ");
    scanf("%d%d", &x, &n);
    sum = x;
    fact = 1;
    prod = x;
    for (i = 2; i <= n; i++)
    {
        fact = 1;
        j = 1;
        while (j <= (2 * i) - 1)
        {
            fact *= j;
            j++;
        }
        prod *= (-1) * x * x;
        sum += (float)prod / (float)fact;
    }
    printf("\nThe required sum of the series is : %.2f", sum);

    return 0;
}

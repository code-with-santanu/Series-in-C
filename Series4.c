//  1+ 2^2/2 + 3^3/3 + 4^4/4 +......+ n^n/n

#include <stdio.h>

int main()
{
    int n, i, prod, count;
    float sum;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    sum = 0;
    for (i = 1; i <= n; i++)
    {
        prod = 1;
        count = i;
        while (count > 0)
        {
            prod *= i;
            count--;
        }
        sum += (prod / (float)i);
    }
    printf("\nThe sum of the given series is: %2f", sum);

    return 0;
}
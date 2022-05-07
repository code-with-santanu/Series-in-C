//  1 + (1+2) + (1+2+3) + (1+2+3+4) +......+ (1+2+3+...+n)

#include <stdio.h>

int main()
{
    int n, i, t, sum;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    sum = 0;
    for (i = 1; i <= n; i++)
    {
        t += i;
        sum += t;
    }
    printf("\nThe sum of the given series is: %d", sum);

    return 0;
}
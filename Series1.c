//  1+ 1/2 + 1/3 + 1/4 +......+ 1/n

#include <stdio.h>

int main()
{
    int n, i;
    float sum;
    printf("\nEnter the value of n: ");
    scanf("%d", &n);

    sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += (1 / (float)i);
    }
    printf("\nThe sum of the given series is: %3f", sum);

    return 0;
}
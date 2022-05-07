//  1/2 + 2/3 + 3/4 +......+ n/(n+1)

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
        sum += (i / (float)(i + 1));
    }
    printf("\nThe sum of the given series is: %3f", sum);

    return 0;
}
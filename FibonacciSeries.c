//  0 , 1 , 1 , 2 , 3 , 5 ....

#include <stdio.h>

void DisplaySeries(int);
int ReturnValue(int);

int main()
{
    int n, a, b, count = 0;
    printf("\nEnter the range: ");
    scanf("%d", &n);

    DisplaySeries(n);
    printf("\n");

    n = n - 2;
    while (count < 5)
    {
        printf("\nFor range %d : ", n);
        DisplaySeries(n);
        printf("\n");
        n++;
        count++;
    }

    ReturnValue(n);

    return 0;
}

void DisplaySeries(int range)
{
    int c = 0, a = 0, b = 1;

    while (c <= range)
    {
        printf("\t%d", c);
        a = b;
        b = c;
        c = a + b;
    }
}

int ReturnValue(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 1;
    }
    return ReturnValue(n - 1) + ReturnValue(n - 2);
}
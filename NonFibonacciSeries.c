//  4 , 6 , 7  , 9 , 10 .......

#include <stdio.h>

void DisplaySeries(int);

int main()
{
    int range;
    printf("\nEnter the range: ");
    scanf("%d", &range);

    DisplaySeries(range);

    return 0;
}

void DisplaySeries(int range)
{
    int a, b, prev, new, i;
    a = 1;
    b = 1;
    prev = 0;
    while (prev <= range)
    {
        prev = a + b;
        a = b;
        b = prev;
        new = a + b;

        for (i = prev + 1; i < new; i++)
        {
            if (i <= range)
            {
                printf("\t%d", i);
            }
            else
            {
                break;
            }
        }
    }
}
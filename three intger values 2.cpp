#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter three integer values: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d is greatest amongst the given values", a);
        }
        else
        {
            printf("%d is the greatest amongst the given values", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is greatest amongst the given values", b);
        }
        else
        {
            printf("%d is the greatest amongst the given values", c);
        }
    }

    return 0 ;
}


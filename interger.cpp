
#include <stdio.h>

int main()
{
    int a;

    printf("Enter a number: ");
    scanf("%d", &a);

    if (a > 0)
    {
        if (a % 2 == 0)
        {
            printf("It's a positive even number");
        }
        else
        {
            printf("It's a positive odd number");
        }
    }
    else if (a < 0)
    {
        printf("It's a negative number");
    }
    else
    {
        printf("It's zero");
    }

    return 0 ;


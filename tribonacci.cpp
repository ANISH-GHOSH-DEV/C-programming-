#include <stdio.h>

int main()
{
    int n;
    int count = 0;

    printf("Enter the number: ");
    scanf("%d", &n);

    while (n > 0)
    {
        count++;
        n = n / 10;
    }

    printf("\nCount of digits = %d", count);

    return 0;
}


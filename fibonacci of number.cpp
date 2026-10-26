#include <stdio.h>

int main()
{
    int n;
    int a = 0, b = 1;
    int sum;
    int i = 1;

    scanf("%d", &n);

    while (i <= n)
    {
        printf("%d\t", a);

        sum = a + b;
        a = b;
        b = sum;

        i++;
    }

    return 0;
}


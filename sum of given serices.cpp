#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    int term = 2;
    int sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += term;
        term += 3;
        i++;
    }

    printf("The sum is: %d", sum);

    return 0;
}


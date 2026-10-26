
#include <stdio.h>

int main()
{
    int n;
    int i = 1;
    int sum = 0;

    printf("Enter the value of n:\n");
    scanf("%d", &n);

    while (i <= n)
    {
        sum += i;
        i++;
    }

    printf("The sum is: %d", sum);

    return 0;
}


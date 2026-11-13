#include <stdio.h>

int main() {
    int n = 4;

    for (int i = 1; i <= n; i++) {
        // Print leading spaces for alignment
        for (int j = 1; j <= n - i; j++) {
            printf("  ");
        }

        // Print descending part
        int num = n;
        for (int j = 1; j <= i; j++) {
            printf("%d ", num);
            if (j < i) {
                num--;
            }
        }

        // Print ascending part
        num = n - i + 2;
        for (int j = 1; j < i; j++) {
            printf("%d ", num);
            num++;
        }

        printf("\n");
    }

    return 0;
}

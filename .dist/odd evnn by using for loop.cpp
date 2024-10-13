#include <stdio.h>

int main() {
    int n,i;

    printf("Enter the range (1 to n): ");
    scanf("%d", &n);

    printf("Even numbers from 1 to %d are:\n", n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("Odd numbers from 1 to %d are:\n", n);
    for (i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    } 

    printf("\n");
    return 0;
}

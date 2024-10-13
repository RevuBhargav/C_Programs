#include <stdio.h>

int main() {
    int i,limit, sum = 0;
    printf("Enter the upper limit: ");
    scanf("%d", &limit);

    for (i = 1; i <= limit; i++) {
        
        if (i % 2 == 0) {
            sum += i; 
        }
    }
     printf("The sum of even numbers from 1 to %d is: %d\n", limit, sum);
}

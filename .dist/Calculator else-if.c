#include <stdio.h>

int main() {
    char operator;
    float num1, num2, result;

  
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%f", &num2);

    
    if (operator == '+') {
        result = num1 + num2;
        printf("Result: %.2f\n", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result: %.2f\n", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("Result: %.2f\n", result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("Result: %.2f\n", result);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}

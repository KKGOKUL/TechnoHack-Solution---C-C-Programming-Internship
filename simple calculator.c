#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Taking input from the user
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Space before %c to consume any leftover whitespace
    
    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Performing the selected operation
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-':
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*':
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}


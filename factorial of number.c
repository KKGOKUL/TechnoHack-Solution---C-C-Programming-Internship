#include <stdio.h>

// Function to calculate factorial using recursion
long long int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: factorial of 0 or 1 is 1
    } else {
        return n * factorial(n - 1);  // Recursive call
    }
}

int main() {
    int num;
    long long int result;

    // Prompting the user for input
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    // Ensure the number is non-negative
    if (num < 0) {
        printf("Error: Factorial of a negative number is not defined.\n");
    } else {
        // Calculating the factorial
        result = factorial(num);
        // Displaying the result
        printf("Factorial of %d is %lld\n", num, result);
    }

    return 0;
}


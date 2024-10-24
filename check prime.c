#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    int i;  // Declare the loop variable outside of the for loop
    
    if (num <= 1) {
        return 0;  // Numbers less than or equal to 1 are not prime
    }

    // Check divisibility from 2 to sqrt(num)
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;  // Not prime if divisible by any number other than 1 and itself
        }
    }

    return 1;  // Prime if no divisors found
}

int main() {
    int num;

    // Prompting the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking if the number is prime
    if (isPrime(num)) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}


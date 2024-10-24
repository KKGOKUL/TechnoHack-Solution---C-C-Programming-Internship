#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    int length = strlen(str);  // Get the length of the string
    int start = 0, end = length - 1;
    char temp;

    // Swap characters from the start and end of the string
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    // Prompting the user for input
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove the newline character if present
    str[strcspn(str, "\n")] = 0;

    // Reverse the string
    reverseString(str);

    // Display the reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}


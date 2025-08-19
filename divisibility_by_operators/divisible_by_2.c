// This program check if a number is divisible by 2 or not

#include <stdio.h>

int main() {
    int num;

    // Takes number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checks for divisibility with operators
    // Returns 1 if the number is divisible,
    // else returns 0.

    printf("%d", num % 2 == 0);

    return 0;
}
// This program calculates the cube of the number taken by the user

#include <stdio.h>

int main() {
    float num;

    // Takes the number
    printf("Enter a number: ");
    scanf("%f", &num);

    // Calculates the cube
    float cube = num * num * num;

    // Outputs the cube
    printf("The cube of the number is %f", cube);

    return 0;
}
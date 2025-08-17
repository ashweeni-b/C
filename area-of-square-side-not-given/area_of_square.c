// This program calculates area of a square if side is not given

#include <stdio.h>

int main() {
    float side;

    // Takes the side of the square from the user
    printf("Enter the side: ");
    scanf("%f", &side);

    // Calculates the area of the square
    float area = side * side;

    // Outputs the area of the square
    printf("The area of square is %f", area);

    return 0;
}
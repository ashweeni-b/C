// This program calculates area of a square if side is not given

#include <stdio.h>

int main() {
    float side;

    printf("Enter the side: ");
    scanf("%f", &side);

    float area = side * side;

    printf("The area of square is %f", area);

    return 0;
}
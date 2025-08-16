// This program calculates perimeter of rectangle by taking sides from user

#include <stdio.h>

int main() {
    float a, b;

    // Takes side a from user
    printf("Enter side a: ");
    scanf("%f", &a);

    // Takes side b from user
    printf("Enter side b: ");
    scanf("%f", &b);

    // Calculates perimeter
    float perimeter = 2 * (a + b);

    // Outputs perimeter
    printf("The perimeter of rectangle is %f", perimeter);

    return 0;
}
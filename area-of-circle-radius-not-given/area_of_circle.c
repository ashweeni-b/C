// This program calculates area of circle if radius is not given

#include <stdio.h>

int main() {
    float radius;

    // Takes radius from the user
    printf("Enter the radius: ");
    scanf("%f", &radius);

    // Calculates the area of the circle
    float area = 3.14 * radius * radius;

    // Outputs the area of the circle
    printf("The area of the circle is %f", area);

    return 0;
}
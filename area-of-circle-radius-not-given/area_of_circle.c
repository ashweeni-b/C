// This program calculates area of circle if radius is not given

#include <stdio.h>

int main() {
    float radius;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    float area = 3.14 * radius * radius;

    printf("The area of the circle is %f", area);

    return 0;
}
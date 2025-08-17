// This program demonstrates Associativity Rule and Operator Precedence

#include <stdio.h>

int main() {
    int a, b, c, d;

    // Expression 1
    a = 5 * 2 - 2 * 3;

    // a = 5 * 2 - 2 * 3
    // a = 10 - 2 * 3
    // a = 10 - 6
    // a = 4

    printf("a = %d \n", a);	

    // Expression 2
    b = 5 * 2 / 2 * 3;

    // b = 5 * 2 / 2 * 3
    // b = 10 / 2 * 3
    // b = 5 * 3
    // b = 15

    printf("b = %d \n", b);

    // Expression 3
    c = 5 * (2 / 2) * 3;

    // c = 5 * (2 / 2) * 3
    // c = 5 * 1 * 3
    // c = 5 * 3
    // c = 15

    printf("c = %d \n", c);

    // Expression 4
    d = 5 + 2 / 2 * 3;

    // d = 5 + 2 / 2 * 3
    // d = 5 + 1 * 3
    // d = 5 + 3
    // d = 8

    printf("d = %d \n", d);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, delta, x1, x2;

    printf("Enter value for a: ");
    scanf("%f", &a);
    printf("Enter value for b: ");
    scanf("%f", &b);
    printf("Enter value for c: ");
    scanf("%f", &c);

    delta = (b * b) - (4 * a * c);

    if (delta > 0) {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Two real roots: x1 = %.2f and x2 = %.2f\n", x1, x2);
    } else if (delta == 0) {
        x1 = -b / (2 * a);
        printf("One double root: x = %.2f\n", x1);
    } else {
        printf("No real roots (delta is negative).\n");
    }

    return 0;
}
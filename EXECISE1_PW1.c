#include <stdio.h>

int main() {
    float num1, num2;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("The greater number is: %.2f\n", num1);
    } else if (num2 > num1) {
        printf("The greater number is: %.2f\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Negative number entered. Program ended.\n");
        return 0;
    }

    while (num > 100) {
        printf("Number is greater than 100. Enter another number between 1 and 100: ");
        scanf("%d", &num);
        if (num < 0) {
            printf("Negative number entered. Program ended.\n");
            return 0;
        }
    }

    printf("You entered a valid number: %d\n", num);

    return 0;
}
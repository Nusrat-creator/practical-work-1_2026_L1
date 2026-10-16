#include <stdio.h>

int main() {
    int n, i;
    float grade, sum = 0, average;

    printf("Enter the number of grades: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter grade %d (0 to 10): ", i);
        scanf("%f", &grade);
        sum += grade;
    }

    average = sum / n;
    printf("Calculated Average: %.2f\n", average);

    if (average >= 0 && average < 5) {
        printf("Result: low average\n");
    } else if (average >= 5 && average <= 8) {
        printf("Result: good average\n");
    } else if (average > 8) {
        printf("Result: excellent average\n");
    }

    return 0;
}
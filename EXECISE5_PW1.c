#include <stdio.h>

int main() {
    float distance = 500.0;
    float cost_mercedes, cost_bmw, cost_tesla;
    float extra_km_m, extra_km_b, extra_km_t;
    int charges;


    extra_km_m = distance - 250;
    cost_mercedes = 100 + (extra_km_m * 1.0);


    extra_km_b = distance - 300;
    cost_bmw = 80 + (extra_km_b * 1.2);


    extra_km_t = distance - 250;
    charges = 2;
    cost_tesla = 180 + (charges * 20);

    printf("Total Cost Comparison for 500 km:\n");
    printf("Mercedes: $%.2f\n", cost_mercedes);
    printf("BMW:      $%.2f\n", cost_bmw);
    printf("Tesla:    $%.2f\n", cost_tesla);

    if (cost_tesla < cost_bmw && cost_tesla < cost_mercedes) {
        printf("Best option: Rent the Tesla!\n");
    } else if (cost_bmw < cost_tesla && cost_bmw < cost_mercedes) {
        printf("Best option: Rent the BMW!\n");
    } else {
        printf("Best option: Rent the Mercedes!\n");
    }

    return 0;
}
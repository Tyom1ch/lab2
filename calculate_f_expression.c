#include <stdio.h>
#include <math.h>

int main() {
    int x = 3, y = 2; // Задаємо значення x та y

    double f = (double)(x + y) / (x * x + x * y + y * y) +
               (double)x / (1 + y * y) +
               (double)y / (1 + x * x);

    printf("f = %.2f\n", f);

    return 0;
}

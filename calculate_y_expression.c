#include <stdio.h>

int main() {
    double a = 5, b = -2, c = 3;
    
    double numerator = (3 * a - 4 * b + 5 * c) - ((a * b - c) / 4.0);
    double denominator = (a * b + 2 * b * c + 3 * a * c);
    
    double y = numerator / denominator;
    
    printf("y = %.2f\n", y);
    
    return 0;
}

#include <stdio.h>

int main() {
    int a, b;
    
    printf("Введіть два цілих числа: ");
    scanf("%d %d", &a, &b);
    
    int remainder = a % b;
    int difference = b - a;
    int sum_square = (a + b) * (a + b);
    
    printf("Залишок від ділення: %d\n", remainder);
    printf("Різниця (b - a): %d\n", difference);
    printf("Сума чисел у квадраті: %d\n", sum_square);
    
    return 0;
}

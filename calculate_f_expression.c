#include <stdio.h>

int main() {
  int x, y;
  double term1, term2, term3, f;

  printf("Введіть значення x: ");
  scanf("%d", &x);

  printf("Введіть значення y: ");
  scanf("%d", &y);

  // Обчислюємо окремі частини виразу
  double denominator1 = (double)(x * x + x * y + y * y); //Знаменник для першого доданку

  term1 = (double)(x + y) / denominator1;

  term2 = (double)x / (1 + y * y);

  term3 = (double)y / (1 + x * x);

  // Обчислюємо значення функції
  f = term1 + term2 + term3;

  printf("Значення функції f: %lf\n", f);

  return 0;
}
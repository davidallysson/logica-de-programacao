#include <stdio.h>

int main() {
  int i = 1, n, celsius, variacao;
  float farenheit;
  scanf("%d", &n);
  while (n--, n >= 0) {
    scanf("%d %d", &celsius, &variacao);
    farenheit = (1.8 * celsius) + 32 + variacao;
    farenheit = (5 * (farenheit - 32)) / 9.0;
    printf("Case %d: %.2f\n", i, farenheit);
    i++;
  }
  return 0;
}

#include <stdio.h>

int main() {
  int n, x, i, soma;
  scanf("%d", &n);
  while (n > 0) {
    soma = 0;
    scanf("%d", &x);
    for (i = 1; i < x; i++) {
      if (x % i == 0) {
        soma += i;
      }
    }
    if (x == soma) {
      printf("%d eh perfeito\n", x);
    } else {
      printf("%d nao eh perfeito\n", x);
    }
    n--;
  }
  return 0;
}

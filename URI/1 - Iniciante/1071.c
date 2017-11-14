#include <stdio.h>

int main() {
  int x, y, aux, i = 0, soma = 0;
  scanf("%d", &x);
  scanf("%d", &y);
  if (x > y) {
    aux = x;
    x = y;
    y = aux;
  }
  for (i = x + 1; i < y; i++) {
    if (i % 2 == 1 || i % 2 == -1) {
      soma += i;
    }
  }
  printf("%d\n", soma);
  return 0;
}

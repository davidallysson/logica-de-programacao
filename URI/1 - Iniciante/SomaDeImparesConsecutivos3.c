#include <stdio.h>

int main() {
  int n, x, y, i, soma = 0;
  scanf("%d", &n);
  while (n > 0) {
    scanf("%d %d", &x, &y);
    if (x % 2 == 0)
      x++;
    for (i = 0; i < y; i++) {
      soma += x;
      x += 2;
    }
    printf("%d\n", soma);
    soma = 0;
    n--;
  }
  return 0;
}

#include <stdio.h>

int main() {
  int x, i, soma = 0;
  scanf("%d", &x);
  while (x != 0) {
    if (x % 2 == 1 || x % 2 == -1)
      x++;
    for (i = 0; i < 5; i++) {
      soma += x;
      x += 2;
    }
    printf("%d\n", soma);
    soma = 0;
    scanf("%d", &x);
  }
  return 0;
}

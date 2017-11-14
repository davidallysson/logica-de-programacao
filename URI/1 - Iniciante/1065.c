#include <stdio.h>

int main() {
  int n, i = 0, pares = 0;
  while (i < 5) {
    scanf("%d", &n);
    if (n % 2 == 0) {
      pares++;
    }
    i++;
  }
  printf("%d valores pares\n", pares);
  return 0;
}

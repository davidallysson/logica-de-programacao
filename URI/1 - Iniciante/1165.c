#include <stdio.h>

int main() {
  int n, x, i;
  scanf("%d", &n);
  while (n > 0) {
    int divisores = 0;
    scanf("%d", &x);
    for (i = 1; i <= x; i++) {
      if (x % i == 0)
        divisores++;
    }
    if (divisores == 2) {
      printf("%d eh primo\n", x);
    } else {
      printf("%d nao eh primo\n", x);
    }
    n--;
  }
  return 0;
}

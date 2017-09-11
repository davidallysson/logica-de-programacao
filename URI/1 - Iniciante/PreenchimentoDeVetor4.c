#include <stdio.h>

int main() {
  int x, j, n = 15, p = 0, i = 0, pares[5] = {0}, impares[5] = {0};
  while (n > 0) {
    scanf("%d", &x);
    if (x % 2 == 0) {
      if (p == 5) {
        for (j = 0; j < 5; j++)
          printf("par[%d] = %d\n", j, pares[j]);
        int pares[5] = {0};
        p = 0;
      }
      pares[p] = x;
      p++;
    } else {
      if (i == 5) {
        for (j = 0; j < 5; j++)
          printf("impar[%d] = %d\n", j, impares[j]);
        int impares[5] = {0};
        i = 0;
      }
      impares[i] = x;
      i++;
    }
    n--;
  }
  for (j = 0; j < i; j++)
    printf("impar[%d] = %d\n", j, impares[j]);

  for (j = 0; j < p; j++)
    printf("par[%d] = %d\n", j, pares[j]);

  return 0;
}

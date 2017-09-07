#include <stdio.h>

int main() {
  int n, m, i, soma = 0;
  scanf("%d %d", &n, &m);
  while (n > 0 && m > 0) {
    if (n < m) {
      for (i = n; i <= m; i++) {
        printf("%d ", i);
        soma += i;
      }
      printf("Sum=%d\n", soma);
    } else {
      for (i = m; i <= n; i++) {
        printf("%d ", i);
        soma += i;
      }
      printf("Sum=%d\n", soma);
    }
    soma = 0;
    scanf("%d %d", &n, &m);
  }
  return 0;
}

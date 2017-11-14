#include <stdio.h>

int main() {
  int n;
  while (scanf("%d", &n), n != 0) {
    int matriz[n][n];
    int a, valor = 1, k = 0, i = 0, j = n - 1;

    if (n & 1)
      matriz[n / 2][n / 2] = n / 2 + 1;

    while (k < ((n / 2) + 1)) {
      for (a = i; a <= j; a++) {
        matriz[a][i] = valor;
        matriz[a][j] = valor;
        matriz[i][a] = valor;
        matriz[j][a] = valor;
      }
      valor++, i++, j--, k++;
    }

    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        printf("%3d", matriz[i][j]);

        if (j == n - 1)
          printf("\n");
        else
          printf(" ");
      }
    }

    printf("\n");
  }
  return 0;
}

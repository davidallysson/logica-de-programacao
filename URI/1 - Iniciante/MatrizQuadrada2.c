#include <stdio.h>

int main() {
  int n, i, j;
  while (scanf("%d", &n), n != 0) {
    int matriz[n][n];

    for (i = 0; i < n; i++) {
      int valor = 1;
      for (j = i; j < n; j++) {
        matriz[i][j] = valor;
        matriz[j][i] = valor;
        valor++;
      }
    }

    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        if (j != 0)
          printf(" ");
        printf("%3d", matriz[i][j]);
      }
      printf("\n");
    }

    printf("\n");
  }
  return 0;
}

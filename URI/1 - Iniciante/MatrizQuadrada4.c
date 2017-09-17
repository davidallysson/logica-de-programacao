#include <stdio.h>

int main() {
  int i, j, n;
  while (scanf("%d", &n) != EOF) {
    int matriz[n][n];

    for (i = 0; i < n; i++)
      for (j = 0; j < n; j++)
        matriz[i][j] = 0;

    for (i = 0, j = n - 1; i < n; i++, j--)
      matriz[i][i] = 2, matriz[i][j] = 3;

    for (i = n/3; i < n - (n/3); i++)
      for (j = n/3; j < n - (n/3); j++)
        matriz[i][j] = 1;

    matriz[n/2][n/2] = 4;

    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++)
        printf("%d", matriz[i][j]);
      printf("\n");
    }
    printf("\n");
  }
  return 0;
}

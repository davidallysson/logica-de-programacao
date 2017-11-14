#include <stdio.h>
#include <math.h>

int contarDigitos(int valor) {
  int contaDigitos = 0;
  do {
    contaDigitos = contaDigitos + 1;
    valor = valor / 10;
  }
  while (valor != 0);
  return contaDigitos;
}

int main() {
  int n, i, j;
  while (scanf("%d", &n), n != 0) {
    int matriz[n][n];

    int valor = 0;
    for (i = 0; i < n; i++) {
      for (j = i; j < n; j++) {
        matriz[i][j] = pow(2, valor + j);
        matriz[j][i] = pow(2, valor + j);
      }
      valor++;
    }

    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        if (j == 0)
          printf("%*d", contarDigitos(matriz[n-1][n-1]), matriz[i][j]);
        else
          printf("%*d", contarDigitos(matriz[n-1][n-1]) + 1, matriz[i][j]);
      }
      printf("\n");
    }

    printf("\n");
  }

  return 0;
}

#include <stdio.h>

int main() {
  int i = 0, nc, n, salto;
  //scanf("%d", &nc);
  //for (i = 1; i <= nc; i++) {
    scanf("%d %d", &n, &salto);
    int soldados[n];
    int j = 0, passo = salto, vivos = n;
    while (vivos > 1) {
      if (soldados[j] == 0) {
        passo--;
      }
      if (passo == 0) {
        soldados[j] = 1;
        passo = salto;
        vivos--;
      }
      j++;
      if (j == n) {
        j = 0;
      }
    }
    int k = 0;
    for (k = 0; k < n; k++) {
      if (soldados[k] == 0) {
        printf("%d\n", (k+1));
      }
    }
  }
  return 0;
}

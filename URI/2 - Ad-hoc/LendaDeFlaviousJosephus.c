#include <stdio.h>

int main() {
  int k, nc, n, salto;
  scanf("%d", &nc);
  for (k = 0; k < nc; k++) {
    scanf("%d %d", &n, &salto);
    int soldados[n], i = 0, passo = salto, vivos = n;
    for (i = 0; i < n; i++)
      soldados[i] = 1;

    i = 0; //Reiniciando contador
    while (vivos > 1) {
      if (soldados[i] == 1)
        passo--;
      if (passo == 0) {
        soldados[i] = 0;
        passo = salto;
        vivos--;
      }
      i++;
      if (i == n)
        i = 0;
    }

    i = 0; //Reiniciando contador
    for (i = 0; i < n; i++) {
      if (soldados[i] == 1)
        printf("Case %d: %d\n", (k + 1), (i + 1));
    }
  }


  return 0;
}

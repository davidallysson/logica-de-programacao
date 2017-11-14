#include <stdio.h>

int main() {
  int i = 0, n, quantia, coelho = 0, rato = 0, sapo = 0;
  char tipo;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d %c", &quantia, &tipo);
    switch (tipo) {
      case 'C':
        coelho += quantia;
        break;
      case 'R':
        rato += quantia;
        break;
      case 'S':
        sapo += quantia;
        break;
    }
  }
  printf("Total: %d cobaias\n", (coelho + rato + sapo));
  printf("Total de coelhos: %d\n", coelho);
  printf("Total de ratos: %d\n", rato);
  printf("Total de sapos: %d\n", sapo);
  printf("Percentual de coelhos: %.2f %%\n", ( (coelho * 100.0f) / (coelho + rato + sapo) ) );
  printf("Percentual de ratos: %.2f %%\n", ( (rato * 100.0f) / (coelho + rato + sapo) ) );
  printf("Percentual de sapos: %.2f %%\n", ( (sapo * 100.0f) / (coelho + rato + sapo) ) );
  return 0;
}

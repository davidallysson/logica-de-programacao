#include <stdio.h>
#include <string.h>

int main() {
  int n, j, i = 1;
  int quilosAtual;
  double preco, total, totalQuilos;
  char frutas[10000];
  scanf("%d", &n);
  while (i <= n) {
    quilosAtual = 0;
    scanf("%lf ", &preco);
    gets(frutas);
    quilosAtual += 1.0f;
    for (j = 0; j < strlen(frutas); j++) {
      if (frutas[j] == ' ')
        quilosAtual += 1.0f;
    }
    total += preco;
    totalQuilos += quilosAtual;
    printf("day %d: %d kg\n", i, quilosAtual);
    i++;
  }
  printf("%.2lf kg by day\n", (totalQuilos / n) );
  printf("R$ %.2lf by day\n", (total / n) );
  return 0;
}

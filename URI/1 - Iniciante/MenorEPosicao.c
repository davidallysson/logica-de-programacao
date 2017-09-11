#include <stdio.h>

int main() {
  int n, i, menor, posicaomenor;
  scanf("%d", &n);
  int vetor[n];
  for (i = 0; i < n; i++)
    scanf("%d", &vetor[i]);

  menor = vetor[0];
  for (i = 1; i < n; i++) {
    if (vetor[i] < menor) {
      menor = vetor[i];
      posicaomenor = i;
    }
  }
  printf("Menor valor: %d\n", menor);
  printf("Posicao: %d\n", posicaomenor);
  return 0;
}

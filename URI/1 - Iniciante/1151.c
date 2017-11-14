#include <stdio.h>

int main() {
  int n, i, anterior, atual, proximo;
  scanf("%d", &n);
  anterior = 0;
  atual = 1;
  printf("%d %d ", anterior, atual);
  for (i = 2; i < n; i++) {
    proximo = anterior + atual;
    printf("%d", proximo);
    anterior = atual;
    atual = proximo;
    if (i != (n - 1))
      printf(" ");
    else
      printf("\n");
  }
  return 0;
}

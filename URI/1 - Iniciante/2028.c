#include <stdio.h>

int main() {
  int n, casos = 0;
  while(scanf("%d", &n) != EOF) {
    int i, j, quantidadeDeNumeros = 1;
    for (i = 1; i <= n; i++) {
      quantidadeDeNumeros += i;
    }
    printf("Caso %d: ", ++casos);
    if (n == 0) {
      printf("%d numero\n", quantidadeDeNumeros);
    }
    else {
      printf("%d numeros\n", quantidadeDeNumeros);
    }
    printf("0");
    for (i = 1; i <= n; i++) {
      for (j = 0; j < i; j++) {
        printf(" %d", i);
      }
    }
    printf("\n\n");
  }
  return 0;
}

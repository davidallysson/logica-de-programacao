#include <stdio.h>

int main() {
  int n, i = 0, pares = 0, impares = 0, positivos = 0, negativos = 0;
  while (i < 5) {
    scanf("%d", &n);
    if (n > 0) {
      positivos++;
    } else if (n < 0){
      negativos++;
    }
    if (n % 2 == 0) {
      pares++;
    } else {
      impares++;
    }
    i++;
  }
  printf("%d valor(es) par(es)\n", pares);
  printf("%d valor(es) impar(es)\n", impares);
  printf("%d valor(es) positivo(s)\n", positivos);
  printf("%d valor(es) negativo(s)\n", negativos);
  return 0;
}

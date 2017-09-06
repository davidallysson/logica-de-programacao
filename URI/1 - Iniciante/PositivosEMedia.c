#include <stdio.h>

int main() {
  int positivos = 0, i = 0;
  float n = 0, soma = 0;
  while (i < 6) {
    scanf("%f", &n);
    if (n > 0) {
      positivos++;
      soma += n;
    }
    i += 1;
  }
  printf("%d valores positivos\n", positivos);
  float media = soma / positivos;
  printf("%.1f\n", media);
  return 0;
}

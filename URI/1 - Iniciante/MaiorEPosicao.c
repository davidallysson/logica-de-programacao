#include <stdio.h>

int main() {
  int i = 1, num, maior = 0, posicao;
  while (i <= 100) {
    scanf("%d", &num);
    if (num > maior) {
      maior = num;
      posicao = i;
    }
    i++;
  }
  printf("%d\n", maior);
  printf("%d\n", posicao);
  return 0;
}

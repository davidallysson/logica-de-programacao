#include <stdio.h>

int main() {
  int idade, i = 0;
  double media;
  scanf("%d", &idade);
  while (idade >= 0) {
    media += idade;
    i++;
    scanf("%d", &idade);
  }
  media = media / i;
  printf("%.2lf\n", media);
  return 0;
}

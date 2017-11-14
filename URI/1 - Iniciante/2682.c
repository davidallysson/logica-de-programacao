#include <stdio.h>

int main() {
  int ultimo = 0, atual = 0, errado = 0, isWrong = 1;
  while( scanf("%d", &atual) != EOF) {
    if ((ultimo > atual) && (isWrong)) {
      errado = ultimo;
      isWrong = 0;
    }
    ultimo = atual;
  }
  if (isWrong) {
    printf("%d\n", ++atual);
  } else {
    printf("%d\n", ++errado);
  }
  return 0;
}

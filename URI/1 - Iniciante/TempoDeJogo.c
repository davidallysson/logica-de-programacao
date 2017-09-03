#include <stdio.h>

int main() {
  int inicio, fim;
  scanf("%d %d", &inicio, &fim);
  if (inicio == fim) {
    printf("O JOGO DUROU 24 HORA(S)\n");
  } else if(inicio < fim) {
    printf("O JOGO DUROU %d HORA(S)\n", (fim - inicio));
  } else if(fim < inicio) {
    fim += 24;
    printf("O JOGO DUROU %d HORA(S)\n", (fim - inicio));
  }
  return 0;
}

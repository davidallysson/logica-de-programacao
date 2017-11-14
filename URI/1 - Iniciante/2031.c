#include <stdio.h>

int main() {
  int n;
  char j1[10], j2[10];
  scanf("%d", &n);
  do {
    scanf("%s", &j1);
    scanf("%s", &j2);
    if (j1[1] == 't' && j2[1] == 'e') {
      printf("Jogador 1 venceu\n");
    } else if (j1[1] == 'e' && j2[1] == 't') {
      printf("Jogador 2 venceu\n");
    } else if (j1[1] == 'e' && j2[1] == 'a') {
      printf("Jogador 1 venceu\n");
    } else if (j1[1] == 'a' && j2[1] == 'e') {
      printf("Jogador 2 venceu\n");
    } else if (j1[1] == 'a' && j2[1] == 't') {
      printf("Jogador 2 venceu\n");
    } else if (j1[1] == 't' && j2[1] == 'a') {
      printf("Jogador 1 venceu\n");
    } else if (j1[1] == 'a' && j2[1] == 'a') {
      printf("Ambos venceram\n");
    } else if (j1[1] == 'e' && j2[1] == 'e') {
      printf("Sem ganhador\n");
    } else if (j1[1] == 't' && j2[1] == 't') {
      printf("Aniquilacao mutua\n");
    }
  } while(--n != 0);
  return 0;
}

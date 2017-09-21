#include <stdio.h>

int main() {
  int n, mao1, mao2;
  char jogador1[25], jogador2[25], escolha1[10], escolha2[10];
  scanf("%d", &n);
  while (n != 0) {
    scanf("%s %s %s %s", &jogador1, &escolha1, &jogador2, &escolha2);
    scanf("%d %d", &mao1, &mao2);
    if ( (mao1 + mao2) & 1) {
      if (escolha1[0] == 'I') {
        printf("%s\n", jogador1);
      } else if (escolha2[0] == 'I') {
        printf("%s\n", jogador2);
      }
    } else {
      if (escolha1[0] == 'P') {
        printf("%s\n", jogador1);
      } else if (escolha2[0] == 'P') {
        printf("%s\n", jogador2);
      }
    }
    n--;
  }
  return 0;
}

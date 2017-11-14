#include <stdio.h>
#include <string.h>

int main() {
  int n, i = 1, sheldon, raj;
  scanf("%d", &n);
  while (i <= n) {
    char jogada1[10], jogada2[10];
    scanf("%s %s", &jogada1, &jogada2);

    if (strcmp(jogada1, "pedra") == 0) sheldon = 0;
    else if (strcmp(jogada1, "papel") == 0) sheldon = 1;
    else if (strcmp(jogada1, "tesoura") == 0) sheldon = 2;
    else if (strcmp(jogada1, "lagarto") == 0) sheldon = 3;
    else if (strcmp(jogada1, "Spock") == 0) sheldon = 4;
    if (strcmp(jogada2, "pedra") == 0) raj = 0;
    else if (strcmp(jogada2, "papel") == 0) raj = 1;
    else if (strcmp(jogada2, "tesoura") == 0) raj = 2;
    else if (strcmp(jogada2, "lagarto") == 0) raj = 3;
    else if (strcmp(jogada2, "Spock") == 0) raj = 4;

    if (sheldon == raj) printf("Caso #%d: De novo!\n", i);
    else {
      switch (sheldon) {
        case 0:
          if (raj == 2 || raj == 3) printf("Caso #%d: Bazinga!\n", i);
          else if (raj == 1 || raj == 4) printf("Caso #%d: Raj trapaceou!\n", i);
          break;
        case 1:
          if (raj == 0 || raj == 4) printf("Caso #%d: Bazinga!\n", i);
          else if (raj == 2 || raj == 3) printf("Caso #%d: Raj trapaceou!\n", i);
          break;
        case 2:
          if (raj == 1 || raj == 3) printf("Caso #%d: Bazinga!\n", i);
          else if (raj == 0 || raj == 4) printf("Caso #%d: Raj trapaceou!\n", i);
          break;
        case 3:
          if (raj == 4 || raj == 1) printf("Caso #%d: Bazinga!\n", i);
          else if (raj == 0 || raj == 2) printf("Caso #%d: Raj trapaceou!\n", i);
          break;
        case 4:
          if (raj == 2 || raj == 0) printf("Caso #%d: Bazinga!\n", i);
          else if (raj == 1 || raj == 3) printf("Caso #%d: Raj trapaceou!\n", i);
          break;
      }
    }
    i++;
  }
  return 0;
}

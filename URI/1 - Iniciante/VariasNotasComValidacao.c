#include <stdio.h>

int main() {
  int op;
  float n1, n2;
  do {
    do {
      scanf("%f", &n1);
      if (n1 < 0 || n1 > 10)
        printf("nota invalida\n");
    } while(n1 < 0 || n1 > 10);
    do {
      scanf("%f", &n2);
      if (n2 < 0 || n2 > 10)
        printf("nota invalida\n");
    } while(n2 < 0 || n2 > 10);
    printf("media = %.2f\n", (n1 + n2) / 2.0f);
    do {
      printf("novo calculo (1-sim 2-nao)\n");
      scanf("%d", &op);
    } while(op != 1 && op != 2);
  } while (op == 1);
  return 0;
}

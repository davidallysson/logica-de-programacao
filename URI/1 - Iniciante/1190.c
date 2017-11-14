#include <stdio.h>

int main() {
  char op;
  int i, j, k;
  double soma = 0, media = 0;
  double matriz[12][12];
  scanf("%c", &op);

  for (i = 0; i < 12; i++)
    for (j = 0; j < 12; j++)
      scanf("%lf", &matriz[i][j] );

  for (k = 0, j = 11; j > 6; j--, k++) {
    for (i = 1 + k; i < 11 - k; i++)
      soma += matriz[i][j];
  }

  if ( op == 'S' ) {
    printf("%.1lf\n", soma);
  } else if (op == 'M') {
    printf("%.1lf\n", (soma / 30.0f));
  }

  return 0;
}

#include <stdio.h>

int main() {
  int tempoGasto, velocidadeMedia;
  scanf("%d", &tempoGasto);
  scanf("%d", &velocidadeMedia);
  double litros = (tempoGasto * velocidadeMedia) / 12.0;
  printf("%.3lf\n", litros);
  return 0;
}

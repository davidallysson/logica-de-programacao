#include <stdio.h>

int main() {
  int distancia;
  float combustivelGasto, consumoMedio;
  scanf("%d", &distancia);
  scanf("%f", &combustivelGasto);
  printf("%.3f km/l\n", (distancia / combustivelGasto));
  return 0;
}

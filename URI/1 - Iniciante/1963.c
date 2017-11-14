#include <stdio.h>

int main() {
  double valorAntes, valorDepois, resultado;
  scanf("%lf %lf", &valorAntes, &valorDepois);
  resultado = ((valorDepois * 100) / valorAntes) - 100;
  if (resultado < 0.0f) {
    resultado = 0.0f;
  }
  printf("%.2f%%\n", resultado);
  return 0;
}

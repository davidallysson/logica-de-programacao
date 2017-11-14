#include <stdio.h>

int main() {
  double valor;
  scanf("%lf", &valor);
  if (valor >= 0.0 && valor <= 25.0000) {
    printf("Intervalo [0,25]\n");
  } else if (valor >= 25.00001 && valor <= 50.00000) {
    printf("Intervalo (25,50]\n");
  } else if (valor >= 50.00001 && valor <= 75.00000) {
    printf("Intervalo (50,75]\n");
  } else if (valor >= 75.00001 && valor <= 100.00000) {
    printf("Intervalo (75,100]\n");
  } else {
    printf("Fora de intervalo\n");
  }
  return 0;
}

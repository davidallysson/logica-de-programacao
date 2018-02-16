#include <stdio.h>

int main() {
  int expoente = 0;
  double numero;
  scanf("%lf", &numero);
  if (numero >= 0) {
    printf("+");
  }
  //LOGICA
  printf("%.4lfE", numero);
  if (expoente >= 0) {
    printf("+");
  }
  printf("%.2d\n", expoente);
  return 0;
}

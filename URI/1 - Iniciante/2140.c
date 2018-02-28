#include <stdio.h>

int main() {
  int valor, pago;
  while (scanf("%d %d", &valor, &pago) != EOF) {
    if (valor == 0 || pago == 0) break;
    switch (pago - valor) {
      case 150:
      case 120:
      case 110:
      case 105:
      case 102:
      case 70:
      case 60:
      case 55:
      case 52:
      case 30:
      case 25:
      case 22:
      case 15:
      case 12:
      case 7:
        printf("possible\n");
        break;
      default:
        printf("impossible\n");
        break;
    }
  }
  return 0;
}

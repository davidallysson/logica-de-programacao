#include <stdio.h>

int main() {
  double volume, diametro;
  while(scanf("%lf", &volume) != EOF && scanf("%lf", &diametro) != EOF) {
    double raio = diametro / 2.0f;
    double altura = ( volume / (3.14 * (raio * raio) ) );
    double area = (3.14 * (raio * raio));
    printf("ALTURA = %.2lf\n", altura);
    printf("AREA = %.2lf\n", area);
  }
  return 0;
}

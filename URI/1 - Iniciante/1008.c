#include <stdio.h>

int main() {
  int numero, horas;
  float valordahora;
  scanf("%d", &numero);
  scanf("%d", &horas);
  scanf("%f", &valordahora);
  printf("NUMBER = %d\n", numero);
  printf("SALARY = U$ %.2f\n", ( horas * valordahora ));
  return 0;
}

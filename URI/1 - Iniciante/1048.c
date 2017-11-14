#include <stdio.h>

int main() {
  float salario;
  scanf("%f", &salario);
  if (salario > 0.00 && salario <= 400.00) {
    float novosalario = salario * 1.15;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n", novosalario, (novosalario - salario));
  } else if(salario > 400.01 && salario <= 800.00) {
    float novosalario = salario * 1.12;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n", novosalario, (novosalario - salario));
  } else if(salario > 800.01 && salario <= 1200.00) {
    float novosalario = salario * 1.10;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n", novosalario, (novosalario - salario));
  } else if(salario > 1200.01 && salario <= 2000.00) {
    float novosalario = salario * 1.07;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n", novosalario, (novosalario - salario));
  } else if(salario > 2000.00) {
    float novosalario = salario * 1.04;
    printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n", novosalario, (novosalario - salario));
  }
  return 0;
}

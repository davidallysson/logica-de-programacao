#include <stdio.h>

int main() {
  int notas100 = 0, notas50 = 0, notas20 = 0, notas10 = 0, notas5 = 0, notas2 = 0;
  int moedas1R = 0, moedas50 = 0, moedas25 = 0, moedas10 = 0, moedas5 = 0, moedas1 = 0;
  double valor;
  scanf("%lf", &valor);
  printf("NOTAS:\n");
  while (valor >= 100.0) {
    notas100 += 1;
    valor -= 100.0;
  }
  printf("%d nota(s) de R$ 100.00\n", notas100);
  while (valor >= 50.0) {
    notas50 += 1;
    valor -= 50.0;
  }
  printf("%d nota(s) de R$ 50.00\n", notas50);
  while (valor >= 20.0) {
    notas20 += 1;
    valor -= 20.0;
  }
  printf("%d nota(s) de R$ 20.00\n", notas20);
  while (valor >= 10.0) {
    notas10 += 1;
    valor -= 10.0;
  }
  printf("%d nota(s) de R$ 10.00\n", notas10);
  while (valor >= 5.0) {
    notas5 += 1;
    valor -= 5.0;
  }
  printf("%d nota(s) de R$ 5.00\n", notas5);
  while (valor >= 2.0) {
    notas2 += 1;
    valor -= 2.0;
  }
  printf("%d nota(s) de R$ 2.00\n", notas2);
  printf("MOEDAS:\n");
  while (valor >= 1.0) {
    moedas1R += 1;
    valor -= 1.0;
  }
  printf("%d moeda(s) de R$ 1.00\n", moedas1R);
  while (valor >= 0.50) {
    moedas50 += 1;
    valor -= 0.50;
  }
  printf("%d moeda(s) de R$ 0.50\n", moedas50);
  while (valor >= 0.25) {
    moedas25 += 1;
    valor -= 0.25;
  }
  printf("%d moeda(s) de R$ 0.25\n", moedas25);
  while (valor >= 0.10) {
    moedas10 += 1;
    valor -= 0.10;
  }
  printf("%d moeda(s) de R$ 0.10\n", moedas10);
  while (valor >= 0.05) {
    moedas5 += 1;
    valor -= 0.05;
  }
  printf("%d moeda(s) de R$ 0.05\n", moedas5);
  while (valor >= 0.01) {
    moedas1 += 1;
    valor -= 0.01;
  }
  printf("%d moeda(s) de R$ 0.01\n", moedas1);
  return 0;
}

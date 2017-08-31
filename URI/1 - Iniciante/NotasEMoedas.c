#include <stdio.h>

int main() {
  int notas = 0, moedas = 0;
  double valor = 0;
  float fracionado = 0;
  scanf("%lf", &valor);
  notas = (int) valor;
  fracionado = (valor - notas) * 100;
  moedas = (int) fracionado;

  int notas100 = notas / 100;
  notas = notas % 100;
  int notas50 = notas / 50;
  notas = notas % 50;
  int notas20 = notas / 20;
  notas = notas % 20;
  int notas10 = notas / 10;
  notas = notas % 10;
  int notas5 = notas / 5;
  notas = notas % 5;
  int notas2 = notas / 2;
  notas = notas % 2;
  int moedas1R = notas / 1;
  notas = notas % 1;

  printf("NOTAS:\n");
  printf("%d nota(s) de R$ 100.00\n", notas100);
  printf("%d nota(s) de R$ 50.00\n", notas50);
  printf("%d nota(s) de R$ 20.00\n", notas20);
  printf("%d nota(s) de R$ 10.00\n", notas10);
  printf("%d nota(s) de R$ 5.00\n", notas5);
  printf("%d nota(s) de R$ 2.00\n", notas2);

  int moedas50 = moedas / 50;
  moedas = moedas % 50;
  int moedas25 = moedas / 25;
  moedas = moedas % 25;
  int moedas10 = moedas / 10;
  moedas = moedas % 10;
  int moedas5 = moedas / 5;
  moedas = moedas % 5;
  int moedas1 = moedas / 1;
  moedas = moedas % 1;

  printf("MOEDAS:\n");
  printf("%d moeda(s) de R$ 1.00\n", moedas1R);
  printf("%d moeda(s) de R$ 0.50\n", moedas50);
  printf("%d moeda(s) de R$ 0.25\n", moedas25);
  printf("%d moeda(s) de R$ 0.10\n", moedas10);
  printf("%d moeda(s) de R$ 0.05\n", moedas5);
  printf("%d moeda(s) de R$ 0.01\n", moedas1);
}

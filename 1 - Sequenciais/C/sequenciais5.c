//Faça um programa que converta metros para centímetros.

#include <stdio.h>

int main()
{
  printf("Digite um valor, em metros: \n");
  int metros;
  scanf("%d", &metros);
  printf("O valor, em centimetros, eh de: %d", metros * 100);
  return 0;
}

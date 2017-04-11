//Escreva um programa que leia um número e mostre se ele é positivo.

#include <stdio.h>

int main()
{
  int numero;
  scanf("%d", &numero);
  if (numero >= 0) {
    printf("O numero %d eh positivo.", numero);
  }
  else {
    printf("O numero %d eh negativo.", numero);
  }
  return 0;
}

//Escreva um programa que leia um número e mostre se ele é múltiplo de 7.

#include <stdio.h>

int main()
{
  int numero;
  scanf("%d", &numero);
  if (numero % 7 == 0)
  {
    printf("%d eh multiplo de 7.", numero);
  }
  else
  {
    printf("%d nao eh multiplo de 7.", numero);
  }

  return 0;
}

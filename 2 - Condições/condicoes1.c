//Escreva um programa que leia um número e mostre se ele é igual a 10.

#include <stdio.h>

int main()
{
  int numero;
  scanf("%d", &numero);
  if (numero == 10)
  {
    printf("O valor eh igual a 10.");
  }
  else
  {
    printf("O valor eh diferente de 10.");
  }

  return 0;
}

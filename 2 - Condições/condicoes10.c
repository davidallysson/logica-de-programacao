//Escreva um programa que leia dois números inteiros e informe se o maior é múltiplo do menor

#include <stdio.h>

int main()
{
  int n1, n2;
  scanf("%d %d", &n1, &n2);
  if (n1 >= n2)
  {
    printf("%d eh maior que %d\n", n1, n2);
    if (n1 % n2 == 0)
    {
      printf("%d eh multiplo de %d\n", n1, n2);
    }
    else
    {
      printf("%d nao eh multiplo de %d\n", n1, n2);
    }
  }
  else if (n2 >= n1)
  {
    printf("%d eh maior que %d\n", n2, n1);
    if (n2 % n1 == 0)
    {
      printf("%d eh multiplo de %d\n", n2, n1);
    }
    else
    {
      printf("%d nao eh multiplo de %d\n", n2, n1);
    }
  }
  return 0;
}

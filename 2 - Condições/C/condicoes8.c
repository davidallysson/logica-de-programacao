//Escreva um programa que leia um número inteiro que corresponde a um ângulo e informe em qual quadrante este ângulo se encontra.

#include <stdio.h>

int main()
{
  int angulo;
  scanf("%d", &angulo);
  if (angulo >= 0 && angulo <= 90) {
    printf("O angulo esta no primeiro quadrante");
  }
  else if (angulo > 90 && angulo <= 180) {
    printf("O angulo esta no segundo quadrante");
  }
  else if (angulo > 180 && angulo <= 270) {
    printf("O angulo esta no terceiro quadrante");
  }
  else if (angulo > 270 && angulo <= 360) {
    printf("O angulo esta no quarto quadrante");
  }
  return 0;
}

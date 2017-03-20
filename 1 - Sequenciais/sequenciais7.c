//Faça um programa que calcule a área de um quadrado, em seguida mostre o dobro desta área para o usuário.

#include <stdio.h>

int main()
{
  float lado;
  printf("Digite o valor do lado do quadrado: \n");
  scanf("%f", &lado);
  printf("O dobro da area do quadrado eh de: %.2f", (lado * lado) * 2);
}

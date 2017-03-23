//Faça um programa que peça 2 números inteiros e um número real. Calcule e mostre:
//  - o produto do dobro do primeiro com metade do segundo
//  - a soma do triplo do primeiro com o terceiro
//  - o terceiro elevado ao cubo

#include <stdio.h>
#include <math.h>

int main()
{
  int n1, n2;
  float n3;
  printf("Digite dois numeros inteiros: ");
  scanf("%d %d", &n1, &n2);
  printf("Digite um numero real: ");
  scanf("%f", &n3);
  printf("O produto do dobro do primeiro com metade do segundo eh: %.2f \n", (n1 * 2.0) * (n2 / 2.0));
  printf("A soma do triplo do primeiro com o terceiro eh: %.2f \n", (n1 * 3) + n3);
  printf("O terceiro elevado ao cubo eh: %.2f \n", pow(n3, 3));
  return 0;
}

//Faça um programa que peça as 4 notas bimestrais e mostre a média.

#include <stdio.h>

int main()
{
  int n1, n2, n3, n4;
  float media;
  printf("Digite 4 notas: \n");
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
  media = (n1 + n2 + n3 + n4) / 4.0;
  printf("A media eh: %.2f", media);
  return 0;
}

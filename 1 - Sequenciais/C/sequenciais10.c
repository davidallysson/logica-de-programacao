//Faça um programa que peça a temperatura em graus Celsius, transforme e mostre em graus Farenheit.

#include <stdio.h>

int main()
{
  float celsius;
  printf("Digite uma temperatura, em Celsius: ");
  scanf("%f", &celsius);
  double farenheit = 1.80 * celsius + 32;
  printf("A temperatura, em Farenheit, eh de: %.2f graus Farenheit", farenheit);
  return 0;
}

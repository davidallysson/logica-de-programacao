//Faça um programa que peça a temperatura em graus Farenheit, transforme e mostre a temperatura em graus Celsius.
//C = (5 * (F-32) / 9)

#include <stdio.h>

int main()
{
  float farenheit;
  printf("Digite uma temperatura, em Farenheit: ");
  scanf("%f", &farenheit);
  double celsius = (5 * (farenheit - 32)) / 9.0;
  printf("A temperatura, em Celsius, eh de: %.2f graus.", celsius);
  return 0;
}

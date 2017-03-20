//Faça um programa que peça um número e então mostre a mensagem: "O número informado foi {numero}.

#include <stdio.h>

int main()
{
  int numero;
  printf("Digite um numero:\n");
  scanf("%d", &numero );
  printf("O numero digitado foi: %d\n", numero);
  return 0;
}

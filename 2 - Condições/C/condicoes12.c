//Brincadeira do ímpar ou par: escreva um programa que leia dois nomes e dois valores inteiros, que correspondem ao que cada um colocou, e informe quem ganhou o "impar ou par".

#include <stdio.h>

int main() {
  char nome1[4];
  char nome2[4];
  int mao1;
  int mao2;
  printf("Digite o nome do primeiro jogador: \n");
  gets(nome1);
  printf("Digite o nome do segundo jogador: \n");
  gets(nome2);
  printf("Digite o numero de dedos do primeiro jogador: \n");
  scanf("%d", &mao1);
  printf("Digite o numero de dedos do segundo jogador: \n");
  scanf("%d", &mao2);

  if ((mao1 + mao2) & 1) {
    printf("Vencedor: %s\n", nome1);
  }
  else {
    printf("Vencedor: %s\n", nome2);
  }

  return 0;
}

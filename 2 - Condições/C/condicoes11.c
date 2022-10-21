//Escreva um programa que leia dois nomes de times de futebol, a quantidade de gols do primeiro time, a quantidade de gols do segundo time e mostre o nome do time vencedor da partida.

#include <stdio.h>

int main() {
  char time1[4];
  char time2[4];
  int gols1;
  int gols2;
  printf("Digite o nome do primeiro time: \n");
  gets(time1);
  printf("Digite o nome do segundo time: \n");
  gets(time2);
  printf("Digite a quantidade de gols do primeiro time: \n");
  scanf("%d", &gols1);
  printf("Digite a quantidade de gols do segundo time: \n");
  scanf("%d", &gols2);

  if(gols1 > gols2) {
    printf("Time Vencedor: %s", time1);
  }
  else if(gols1 == gols2) {
    printf("Deu empate!");
  }
  else {
    printf("Time Vencedor: %s", time2);
  }
  return 0;
}

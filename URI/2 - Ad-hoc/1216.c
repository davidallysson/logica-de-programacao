#include <stdio.h>

int main() {
  char nome[100];
  double distancia, distanciaTotal = 0;
  int amigos = 0;
  while (scanf("%s %lf", &nome, &distancia) != EOF) {
    distanciaTotal += distancia;
    amigos++;
  }
  printf("%.1lf\n", (distanciaTotal / amigos));
  return 0;
}

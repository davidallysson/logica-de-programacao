#include <stdio.h>
#include <string.h>

int main() {
  char corvo[20];
  int gritos = 0, soma = 0;
  while (gritos != 3) {
    gets(corvo);
    if (strcmp(corvo, "caw caw") == 0) {
      printf("%d\n", soma);
      soma = 0;
      gritos++;
    } else {
      if (corvo[0] == '*') soma += 4;
      if (corvo[1] == '*') soma += 2;
      if (corvo[2] == '*') soma += 1;
    }
  }
  return 0;
}

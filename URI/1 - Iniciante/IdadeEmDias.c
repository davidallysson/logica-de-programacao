#include <stdio.h>

int main() {
  int dias;
  scanf("%d", &dias);
  int anos = dias / 365;
  dias = dias % 365;
  int meses = dias / 30;
  dias = dias % 30;
  printf("%d ano(s)\n", anos);
  printf("%d mes(es)\n", meses);
  printf("%d dia(s)\n", dias);
  return 0;
}

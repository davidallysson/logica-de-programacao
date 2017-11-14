#include <stdio.h>

int main() {
  int hora, tempo, fuso, horaFinal;
  scanf("%d %d %d", &hora, &tempo, &fuso);
  if (hora == 0) hora = 24;
  horaFinal = hora + tempo + fuso;
  if (horaFinal >= 24) horaFinal -= 24;
  printf("%d\n", horaFinal);
  return 0;
}

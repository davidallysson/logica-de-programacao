#include <stdio.h>

int main() {
  int diaInicial, horaInicial, minutoInicial, segundoInicial;
  int diaFinal, horaFinal, minutoFinal, segundoFinal;
  int quantDias, quantHoras, quantMinutos, quantSegundos;
  scanf("Dia %d", &diaInicial);
  scanf("%d : %d : %d\n", &horaInicial, &minutoInicial, &segundoInicial);
  scanf("Dia %d", &diaFinal);
  scanf("%d : %d : %d", &horaFinal, &minutoFinal, &segundoFinal);
  quantDias = diaFinal - diaInicial;
  if (horaFinal >= horaInicial) {
    quantHoras = horaFinal - horaInicial;
  } else {
    quantDias--;
    quantHoras = horaFinal - horaInicial + 24;
  }
  if (minutoFinal >= minutoInicial) {
    quantMinutos = minutoFinal - minutoInicial;
  } else {
    quantHoras--;
    quantMinutos = minutoFinal - minutoInicial + 60;
  }
  if (segundoFinal >= segundoInicial) {
    quantSegundos = segundoFinal - segundoInicial;
  } else {
    quantMinutos--;
    quantSegundos = segundoFinal - segundoInicial + 60;
  }
  if (quantSegundos == 60) {
    quantSegundos -= 60;
    quantMinutos++;
  }
  printf("%d dia(s)\n", quantDias);
  printf("%d hora(s)\n", quantHoras);
  printf("%d minuto(s)\n", quantMinutos);
  printf("%d segundo(s)\n", quantSegundos);
  return 0;
}

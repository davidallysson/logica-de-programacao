#include <stdio.h>

int main() {
  int horainicial, minutoinicial, horafinal, minutofinal;
  scanf("%d %d %d %d", &horainicial, &minutoinicial, &horafinal, &minutofinal);
  if (horainicial == horafinal && minutoinicial == minutofinal) {
    printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
  } else if(horainicial < horafinal) {
    if (minutoinicial < minutofinal) {
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (horafinal - horainicial), (minutofinal - minutoinicial));
    } else {
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (horafinal - horainicial - 1), (minutofinal - minutoinicial + 60));
    }
  } else if(horafinal < horainicial) {
    if (minutoinicial < minutofinal) {
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (horafinal - horainicial + 24), (minutofinal - minutoinicial));
    } else {
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", (horafinal - horainicial + 24 - 1), (minutofinal - minutoinicial + 60));
    }
  }
  return 0;
}

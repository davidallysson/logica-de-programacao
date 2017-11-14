#include <stdio.h>

int main() {
  int horas, minutos;
  while(scanf("%d:%d", &horas, &minutos) != EOF) {
    horas -= 7;
    if (horas < 0) minutos = 0;
    while (horas > 0) {
      minutos += 60;
      horas--;
    }
    printf("Atraso maximo: %d\n", minutos);
  }
  return 0;
}

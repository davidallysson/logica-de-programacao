#include <stdio.h>

int ePrimo(int numero) {
  int j, divisores = 0;
  for (j = 1; j <= numero; j++)
    if (numero % j == 0)
      divisores++;

  if (divisores == 2)
    return 1;
  else
    return 0;
}

int main() {
  int i, num, digito[6], primo[6] = {9, 9, 9, 9, 9, 9};
  while (scanf("%d", &num) != EOF) {
    digito[5] = (num / 1) % 10;
    // primo[5] = ePrimo(digito[5]);
    if (num > 10) {
      digito[4] = (num / 10) % 10;
      // primo[4] = ePrimo(digito[4]);
    }
    if (num > 100) {
      digito[3] = (num / 100) % 10;
      // primo[3] = ePrimo(digito[3]);
    }
    if (num > 1000) {
      digito[2] = (num / 1000) % 10;
      // primo[2] = ePrimo(digito[2]);
    }
    if (num > 10000) {
      digito[1] = (num / 10000) % 10;
      // primo[1] = ePrimo(digito[1]);
    }

    if ( ePrimo(num) == 0) {
      printf("Nada\n");
    } else if (primo[5] == 0 || primo[4] == 0 || primo[3] == 0 || primo[2] == 0 || primo[1] == 0) {
      printf("Primo\n");
    } else {
      printf("Super\n");
    }
  }
  return 0;
}

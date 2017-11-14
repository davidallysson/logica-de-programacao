#include <stdio.h>

int main() {
  int numero;
  scanf("%d", &numero);
  do {
    if (numero >= 900) {
      numero -= 900;
      printf("CM");
    }
    else if (numero >= 500) {
      numero -= 500;
      printf("D");
    }
    else if (numero >= 400) {
      numero -= 400;
      printf("CD");
    }
    else if (numero >= 100) {
      numero -= 100;
      printf("C");
    }
    else if (numero >= 90) {
      numero -= 90;
      printf("XC");
    }
    else if (numero >= 50) {
      numero -= 50;
      printf("L");
    }
    else if (numero >= 40) {
      numero -= 40;
      printf("XL");
    }
    else if (numero >= 10) {
      numero -= 10;
      printf("X");
    }
    else if (numero >= 9) {
      numero -= 9;
      printf("IX");
    }
    else if (numero >= 5) {
      numero -= 5;
      printf("V");
    }
    else if (numero >= 4) {
      numero -= 4;
      printf("IV");
    }
    else if (numero >= 1) {
      numero -= 1;
      printf("I");
    }
  } while (numero != 0);
  printf("\n");
  return 0;
}

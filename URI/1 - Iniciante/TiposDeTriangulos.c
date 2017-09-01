#include <stdio.h>

int main() {
  float a, b, c, maior, doMeio, menor;
  scanf("%f %f %f", &a, &b, &c);
  if (a >= b && a >= c) {
    maior = a;
    if (b >= c) {
      doMeio = b;
      menor = c;
    } else {
      doMeio = c;
      menor = b;
    }
  }

  if (b >= a && b >= c) {
    maior = b;
    if (a >= c) {
      doMeio = a;
      menor = c;
    } else {
      doMeio = c;
      menor = a;
    }
  }

  if (c >= a && c >= b) {
    maior = c;
    if (a >= b) {
      doMeio = a;
      menor = b;
    } else {
      doMeio = b;
      menor = a;
    }
  }
  a = maior;
  b = doMeio;
  c = menor;
  if (a >= (b + c)) {
    printf("NAO FORMA TRIANGULO\n");
  } else {
    if ( (a * a) == ((b * b) + (c * c)) ) {
      printf("TRIANGULO RETANGULO\n");
    }
    if ( ( (a * a) > ((b * b) + (c * c)) ) ) {
      printf("TRIANGULO OBTUSANGULO\n");
    } else if ( ( (a * a) < ((b * b) + (c * c)) ) ) {
      printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && a == c) {
      printf("TRIANGULO EQUILATERO\n");
    } else if (a == b || a == c || b == c) {
      printf("TRIANGULO ISOSCELES\n");
    }
  }
  return 0;
}

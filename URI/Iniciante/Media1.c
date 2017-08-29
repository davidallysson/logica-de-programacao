#include <stdio.h>

int main() {
  float a, b;
  scanf("%f", &a);
  scanf("%f", &b);
  float media = ((a * 3.5) + (b * 7.5)) / 11;
  printf("MEDIA = %.5f\n", media);
  return 0;
}

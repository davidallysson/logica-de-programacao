#include <stdio.h>

int main() {
  double a, b, c;
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);
  double media = ((a * 2) + (b * 3) + (c * 5)) / 10;
  printf("MEDIA = %.1f\n", media);
  return 0;
}

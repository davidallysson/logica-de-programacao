#include <stdio.h>

int main() {
  double raio;
  scanf("%lf", &raio);
  double pi = 3.14159;
  double area = pi * (raio * raio);
  printf("A=%.4lf\n", area);
  return 0;
}

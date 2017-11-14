#include <stdio.h>

int main() {
  int a, b, c, maiorab, maiorabc;
  scanf("%d %d %d", &a, &b, &c);
  maiorab = ( a + b + abs(a - b) ) / 2;
  maiorabc = ( maiorab + c + abs(maiorab - c) ) / 2;
  printf("%d eh o maior\n", maiorabc);
  return 0;
}

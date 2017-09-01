#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  if (a >= b && a >= c && b >= c) {
    printf("%d\n", c);
    printf("%d\n", b);
    printf("%d\n", a);
  } else if (a >= b && a >= c && c >= b) {
    printf("%d\n", b);
    printf("%d\n", c);
    printf("%d\n", a);
  } else if (b >= a && b >= c && a >= c) {
    printf("%d\n", c);
    printf("%d\n", a);
    printf("%d\n", b);
  } else if (b >= a && b >= c && c >= a) {
    printf("%d\n", a);
    printf("%d\n", c);
    printf("%d\n", b);
  } else if (c >= a && c >= b && a >= b) {
    printf("%d\n", b);
    printf("%d\n", a);
    printf("%d\n", c);
  } else if (c >= a && c >= b && b >= a) {
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);
  }
  printf("\n");
  printf("%d\n", a);
  printf("%d\n", b);
  printf("%d\n", c);
  return 0;
}

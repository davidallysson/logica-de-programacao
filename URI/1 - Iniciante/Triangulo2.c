#include <stdio.h>

int isTriangulo(int x, int y, int z) {
  if ((x < y + z) && (y < x + z) && (z < x + y))
    return 1;
  else
    return 0;
}

int main() {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  if (isTriangulo(a, b, c) | isTriangulo(a, b, d) | isTriangulo(a, c, d) | isTriangulo(b, c, d))
    printf("S\n");
  else
    printf("N\n");
  return 0;
}

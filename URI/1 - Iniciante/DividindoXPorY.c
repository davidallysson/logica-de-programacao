#include <stdio.h>

int main() {
  int i = 0, n, x, y;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d %d", &x, &y);
    if (y == 0) {
      printf("divisao impossivel\n");
    } else {
      printf("%.1f\n", ((x * 1.0f) / (y * 1.0f)) );
    }
  }
  return 0;
}

#include <stdio.h>

int main() {
  int n, i = 0, j = 0;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    for (j = 1 + (4 * i); j <= 4 + (4 * i); j++) {
      if (j % 4 == 0) {
        printf("PUM\n");
      } else {
        printf("%d ", j);
      }
    }
  }
  return 0;
}

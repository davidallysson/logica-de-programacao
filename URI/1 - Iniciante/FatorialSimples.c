#include <stdio.h>

int main() {
  int n, i, f = 1;
  scanf("%d", &n);
  if (n == 0) {
    printf("1\n");
  } else {
    for (i = n; i > 0; i--) {
      f *= i;
    }
    printf("%d\n", f);
  }
  return 0;
}

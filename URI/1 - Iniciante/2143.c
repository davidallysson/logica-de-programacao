#include <stdio.h>

int main() {
  int t, n, i;
  while (scanf("%d", &t) != 0) {
    if (t == 0) break;
    for (i = 0; i < t; i++) {
      scanf("%d", &n);
      if (n & 1) printf("%d\n", (n * 2) - 1);
      else printf("%d\n", (n * 2) - 2);
    }
  }
  return 0;
}

#include <stdio.h>

int main() {
  int x, i = 0;
  scanf("%d", &x);
  for (i = 1; i < x; i += 2) {
    printf("%d\n", i);
  }
  if (x % 2 == 1) {
    printf("%d\n", x);
  }
  return 0;
}

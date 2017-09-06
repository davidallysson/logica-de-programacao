#include <stdio.h>

int main() {
  int x, i = 0;
  scanf("%d", &x);
  if (x % 2 == 1) {
    printf("%d\n", x);
  } else {
    x++;
    printf("%d\n", x);
  }
  for (i = 0; i < 5; i++) {
    x += 2;
    printf("%d\n", x);
  }
  return 0;
}

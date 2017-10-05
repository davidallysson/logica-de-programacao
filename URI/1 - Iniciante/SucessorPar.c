#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if (n & 1) {
    printf("%d\n", ++n);
  } else {
    n += 2;
    printf("%d\n", n);
  }
  return 0;
}

#include <stdio.h>

int main() {
  int i, c, n;
  scanf("%d", &c);
  for (i = 0; i < c; i++) {
    if(scanf("%d\n", &n), n & 1)
      printf("1\n");
    else
      printf("0\n");
  }
  return 0;
}

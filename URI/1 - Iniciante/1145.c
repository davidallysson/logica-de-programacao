#include <stdio.h>

int main() {
  int i = 1, x, y;
  scanf("%d %d", &x, &y);
  while(i <= y) {
    printf("%d", i);
    if (i % x == 0) {
      printf("\n");
    } else {
      printf(" ");
    }
    i++;
  }
  return 0;
}

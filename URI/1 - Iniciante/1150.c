#include <stdio.h>

int main() {
  int x, z, i, j, acm = 0;
  scanf("%d", &x);
  do {
    scanf("%d", &z);
  } while(z <= x);
  for (i = x, j = 0; acm < z; i++, j++) {
    acm += i;
  }
  printf("%d\n", j);
  return 0;
}

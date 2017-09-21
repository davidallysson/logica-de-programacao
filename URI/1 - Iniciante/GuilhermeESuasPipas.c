#include <stdio.h>

int main() {
  int n, i;
  long long int b = 0;
  scanf("%d", &n);
  for (i = 2; i < n - 1; i++) {
    b += i;
  }
  printf("%lli\n", b);
  return 0;
}

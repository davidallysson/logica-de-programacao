#include <stdio.h>

int main() {
  int n, x, i;
  unsigned long long fibonacci[61];
  fibonacci[0] = 0;
  fibonacci[1] = 1;
  for (i = 2; i < 61; i++)
    fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];

  scanf("%d", &n);
  while (n > 0) {
    scanf("%d", &x);
    printf("Fib(%d) = %llu\n", x, fibonacci[x]);
    n--;
  }
  return 0;
}

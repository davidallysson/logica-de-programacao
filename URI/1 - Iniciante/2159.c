#include <stdio.h>

int main() {
  long int n;
  double n1, n2;
  scanf("%ld", &n);
  n1 = n / log(n);
  n2 = (1.25506) * (n / log(n));
  printf("%.1f %.1f\n", n1, n2);
  return 0;
}

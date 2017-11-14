#include <stdio.h>

int main() {
  double s = 1;
  int i = 0;
  for (i = 2; i < 101; i++)
    s += (1.0f / i);
  printf("%.2lf\n", s);
  return 0;
}

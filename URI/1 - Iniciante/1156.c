#include <stdio.h>
#include <math.h>

int main() {
  double s = 0;
  int i = 0, j = 0;
  for (i = 0, j = 1; j < 40; i++, j+=2)
    s += j / pow(2, i);
  printf("%.2lf\n", s);
  return 0;
}

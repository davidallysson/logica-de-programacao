#include <stdio.h>

int main() {
  int n, pa, pb, anos;
  double ca, cb;
  scanf("%d", &n);
  while (n > 0) {
    anos = 0;
    scanf("%d %d %lf %lf", &pa, &pb, &ca, &cb);
    while (pa <= pb) {
      pa += pa * (ca / 100);
      pb += pb * (cb / 100);
      anos++;
      if (anos > 100)
        break;
    }
    if (anos > 100) {
      printf("Mais de 1 seculo.\n");
    } else {
      printf("%d anos.\n", anos);
    }
    n--;
  }
  return 0;
}

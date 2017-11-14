#include <stdio.h>

int main() {
  int i;
  double n, vetor[100];
  scanf("%lf", &n);
  vetor[0] = n;
  for (i = 1; i < 100; i++)
    vetor[i] = vetor[i-1] / 2.0f;

  for (i = 0; i < 100; i++)
    printf("N[%d] = %.4lf\n", i, vetor[i]);
  return 0;
}

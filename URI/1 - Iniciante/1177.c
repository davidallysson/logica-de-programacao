#include <stdio.h>

int main() {
  int n, i, j, vetor[1000];
  scanf("%d", &n);

  for (i = 0, j = 0; i < 1000; i++, j++) {
    vetor[i] = j;
    if (j == n - 1)
      j = -1;
  }

  for (i = 0; i < 1000; i++)
    printf("N[%d] = %d\n", i, vetor[i]);
  return 0;
}

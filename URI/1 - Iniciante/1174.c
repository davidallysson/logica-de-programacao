#include <stdio.h>

int main() {
  float vetor[100];
  int i;
  for (i = 0; i < 100; i++)
    scanf("%f", &vetor[i]);
  for (i = 0; i < 100; i++) {
    if (vetor[i] <= 10.0f) {
      printf("A[%d] = %.1f\n", i, vetor[i]);
    }
  }
  return 0;
}

#include <stdio.h>

int main() {
  int n, i = 0;
  scanf("%d", &n);
  float media[n];
  for (i = 0; i < n; i++) {
    float n1, n2, n3;
    scanf("%f %f %f", &n1, &n2, &n3);
    media[i] = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
  }
  for (i = 0; i < n; i++) {
    printf("%.1f\n", media[i]);
  }
  return 0;
}

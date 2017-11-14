#include <stdio.h>

int main() {
  int n, i = 0;
  scanf("%d", &n);
  int algozes[n];
  while (i < n) {
    int algoz;
    scanf("%d", &algoz);
    algozes[i] = algoz;
    i++;
  }

  int menor = algozes[0], indiceMenor = 0;
  for (i = 1; i < n; i++) {
    if (menor > algozes[i]) {
      menor = algozes[i];
      indiceMenor = i;
    }
  }
  
  printf("%d\n", ++indiceMenor);
  return 0;
}

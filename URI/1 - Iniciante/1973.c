#include <stdio.h>

int main() {
  int i, j;
  unsigned long long  n, estrelasAtacadas = 0, totalOvelhas = 0;
  scanf("%llu", &n);
  int ovelhas[n], ovelhasOriginal[n];
  for (i = 0; i < n; i++) {
    scanf("%llu", &ovelhas[i]);
    ovelhasOriginal[i] = ovelhas[i];
  }
  j = 0;
  while (j >= 0 && j < n) {
    if(ovelhas[j] & 1) {
      if (ovelhas[j] > 0) {
        ovelhas[j]--;
      }
      j++;
    } else {
      if (ovelhas[j] > 0) {
        ovelhas[j]--;
      }
      j--;
    }
  }
  for (i = 0; i < n; i++) {
    totalOvelhas += ovelhas[i];
    if (ovelhasOriginal[i] != ovelhas[i]) {
      estrelasAtacadas++;
    }
  }
  printf("%llu %llu\n", estrelasAtacadas, totalOvelhas);
  return 0;
}

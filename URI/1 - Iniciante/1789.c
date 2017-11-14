#include <stdio.h>

int main() {
  int n;
  while (scanf("%d", &n) != EOF) {
    int vel, nivel = 0;
    while (n > 0) {
      scanf("%d", &vel);
      if (vel >= 20 && nivel < 3) {
        nivel = 3;
      } else if (vel >= 10 && vel < 20 && nivel < 2) {
        nivel = 2;
      } else if (vel >= 0 && vel < 10 && nivel < 1) {
        nivel = 1;
      }
      n--;
    }
    printf("%d\n", nivel);
  }
  return 0;
}

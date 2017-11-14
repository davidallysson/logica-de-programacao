#include <stdio.h>

int main() {
  int n;
  while (scanf("%d", &n) != EOF) {
    if (n > 0) {
      printf("vai ter duas!\n");
    } else if (n == 0) {
      printf("vai ter copa!\n");
    }
  }
  return 0;
}

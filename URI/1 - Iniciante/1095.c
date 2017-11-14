#include <stdio.h>

int main() {
  int i = 0, j = 0;
  for (i = 1, j = 60; j >= 0; i += 3, j -= 5) {
    printf("I=%d J=%d\n", i, j);
  }
  return 0;
}

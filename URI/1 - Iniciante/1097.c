#include <stdio.h>

int main() {
  int i, j;
  for (i = 1; i <= 9; i += 2) {
    for (j = i + 6; j > (i + 3) ; j--) {
      printf("I=%d J=%d\n", i, j);
    }

  }
  return 0;
}

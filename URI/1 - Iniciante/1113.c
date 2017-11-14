#include <stdio.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  while (n != m) {
    if (n < m) {
      printf("Crescente\n");
    } else {
      printf("Decrescente\n");
    }
    scanf("%d %d", &n, &m);
  }
  return 0;
}

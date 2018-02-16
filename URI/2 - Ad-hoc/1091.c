#include <stdio.h>

int main() {
  int k, n, m, x, y;
  scanf("%d", &k);
  while(k != 0) {
    scanf("%d %d", &n, &m);
    while (k > 0) {
      scanf("%d %d", &x, &y);
      if (n == x || m == y) {
        printf("divisa\n");
      } else if (n < x && m < y) {
        printf("NE\n");
      } else if (n > x && m < y) {
        printf("NO\n");
      } else if (n < x && m > y) {
        printf("SE\n");
      } else if (n > x && m > y) {
        printf("SO\n");
      }
      k--;
    }
    scanf("%d", &k);
  }
  return 0;
}

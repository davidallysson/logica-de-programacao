#include <stdio.h>

int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  while (m > 0) {
    char a[10];
    scanf("%s", &a);
    if (a[0] == 'f') {
      n++;
    } else if (a[0] == 'c') {
      n--;
    }
    m--;
  }
  printf("%d\n", n);
  return 0;
}

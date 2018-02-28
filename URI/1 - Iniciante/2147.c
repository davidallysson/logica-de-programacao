#include <stdio.h>
#include <string.h>

int main() {
  int n, i;
  char c[99999];
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%s", &c);
    printf("%.2f\n", (strlen(c) / 100.0));
  }
  return 0;
}

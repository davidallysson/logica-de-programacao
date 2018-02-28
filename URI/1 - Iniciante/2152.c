#include <stdio.h>

int main() {
  int n, h, m, v, i;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%d %d %d", &h, &m, &v);
    if (h < 10 && m < 10) printf("0%d:0%d - ", h, m);
    else if (h < 10) printf("0%d:%d - ", h, m);
    else if (m < 10) printf("%d:0%d - ", h, m);
    else printf("%d:%d - ", h, m);
    if (v == 1) printf("A porta abriu!\n");
    else if (v == 0) printf("A porta fechou!\n");
  }
  return 0;
}

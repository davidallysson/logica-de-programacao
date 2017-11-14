#include <stdio.h>

int main() {
  int i = 0, x = 0;
  scanf("%d", &x);
  do {
    for (i = 1; i <= x; i++) {
      if(i == x)
        printf("%d\n", i);
      else
        printf("%d ", i);
    }
    scanf("%d", &x);
  } while(x != 0);
  return 0;
}

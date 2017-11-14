#include <stdio.h>

int main() {
  int i = 0;
  char *joia[20];
  while (scanf("%s", &joia[i]) != EOF) {
    i++;
  }
  printf("%d\n", i);
  return 0;
}

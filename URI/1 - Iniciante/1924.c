#include <stdio.h>

int main() {
  int n;
  char curso[30];
  scanf("%d", &n);
  while (n != 0) {
    scanf("%s", curso);
    n--;
  }
  printf("Ciencia da Computacao\n");
  return 0;
}

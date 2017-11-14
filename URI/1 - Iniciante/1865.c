#include <stdio.h>
#include <string.h>

int main() {
  int i, n, f;
  char nome[20];
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    scanf("%s ", &nome);
    scanf("%d", &f);
    if (strcmp("Thor", nome) == 0) {
      printf("Y\n");
    } else {
      printf("N\n");
    }
  }
  return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
  char texto[99999];
  gets(texto);
  if (strlen(texto) <= 80) {
    printf("YES\n");
  } else {
    printf("NO\n");
  }
  return 0;
}

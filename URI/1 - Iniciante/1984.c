#include <stdio.h>
#include <string.h>

int main() {
  char str[256];
  int i, tamanho;
  unsigned long long num;

  scanf("%llu", &num);
  sprintf(str, "%lld", num);
  tamanho = strlen(str);

  for (i = 0; i < tamanho; i++)
    printf("%c", str[tamanho-1-i]);
  
  printf("\n");
  return 0;
}

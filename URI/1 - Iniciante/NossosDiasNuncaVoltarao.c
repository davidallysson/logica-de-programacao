#include <stdio.h>

int main() {
  char citacao[35] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
  int n, i;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    printf("%c", citacao[i]);
  
  printf("\n");
  return 0;
}

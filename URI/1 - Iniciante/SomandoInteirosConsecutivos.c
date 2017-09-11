#include <stdio.h>

int main() {
  int i, a, n, soma = 0;
  scanf("%d %d", &a, &n);
  while(n <= 0)
    scanf("%d", &n);
  for (i = a; i < a + n; i++)
    soma += i;
  printf("%d\n", soma);
  return 0;
}

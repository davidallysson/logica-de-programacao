#include <stdio.h>

int main() {
  int positivos;
  float n1, n2, n3, n4, n5, n6;
  scanf("%d", &n1);
  scanf("%d", &n2);
  scanf("%d", &n3);
  scanf("%d", &n4);
  scanf("%d", &n5);
  scanf("%d", &n6);
  if (n1 > 0)
    positivos++;
  if (n2 > 0)
    positivos++;
  if (n3 > 0)
    positivos++;
  if (n4 > 0)
    positivos++;
  if (n5 > 0)
    positivos++;
  if (n6 > 0)
    positivos++;
  printf("%d valores positivos\n", positivos);
  return 0;
}

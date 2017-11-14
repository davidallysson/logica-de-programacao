#include <stdio.h>

int main() {
  int cha, a, b, c, d, e, resposta;
  scanf("%d", &cha);
  scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
  if (cha == a) resposta++;
  if (cha == b) resposta++;
  if (cha == c) resposta++;
  if (cha == d) resposta++;
  if (cha == e) resposta++;
  printf("%d\n", resposta);
  return 0;
}

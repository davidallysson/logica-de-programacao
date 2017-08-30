#include <stdio.h>

int main() {
  char nome[4];
  double salariofixo, vendas;
  scanf("%s", &nome);
  scanf("%lf", &salariofixo);
  scanf("%lf", &vendas);
  printf("TOTAL = R$ %.2lf\n", (salariofixo + (vendas * 0.15)) );
  return 0;
}

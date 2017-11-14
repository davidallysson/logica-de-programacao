#include <stdio.h>

int main() {
  int produtos, quant, codProduto;
  float valorTotal = 0.0f;
  scanf("%d", &produtos);
  do {
    scanf("%d %d", &codProduto, &quant);
         if (codProduto == 1001) valorTotal += 1.50f * quant;
    else if (codProduto == 1002) valorTotal += 2.50f * quant;
    else if (codProduto == 1003) valorTotal += 3.50f * quant;
    else if (codProduto == 1004) valorTotal += 4.50f * quant;
    else if (codProduto == 1005) valorTotal += 5.50f * quant;
  } while(--produtos != 0);
  printf("%.2f\n", valorTotal);
  return 0;
}

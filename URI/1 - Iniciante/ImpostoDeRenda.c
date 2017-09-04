#include <stdio.h>

int main() {
  float renda;
  scanf("%f", &renda);
  if (renda >= 0.00f && renda <= 2000.00f) {
    printf("Isento\n");
  } else if(renda >= 2000.01f && renda <= 3000.00f) {
    renda -= 2000.00f;
    printf("R$ %.2f\n", (renda * 0.08));
  } else if(renda >= 3000.01f && renda <= 4500.00f) {
    renda -= 3000.00f;
    printf("R$ %.2f\n", ((1000 * 0.08) + (renda * 0.18)) );
  } else if(renda >= 4500.01f) {
    renda -= 4500.00f;
    printf("R$ %.2f\n", ((1000 * 0.08) + (1500 * 0.18) + (renda * 0.28)) );
  }
  return 0;
}

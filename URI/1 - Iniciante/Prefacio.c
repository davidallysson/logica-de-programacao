#include <stdio.h>

int main() {
  int dividendo = 0, divisor = 0, quociente = 0, resto = 0;
  scanf("%d %d", &dividendo, &divisor);
  if (dividendo >= 0) printf("%d %d\n", (dividendo / divisor), (dividendo % divisor));  
  else if (divisor < 0) {
    while (dividendo < quociente * divisor) quociente++;
    printf("%d %d\n", quociente, dividendo + (quociente * divisor * -1));
  } else if (divisor > 0) {
    while (dividendo < quociente * divisor) quociente--;
    printf("%d %d\n", quociente, dividendo + (quociente * divisor * -1));
  }
  return 0;
}

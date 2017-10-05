#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ePrimo(int digito) {
  int j, divisores = 0;
  for (j = 1; j <= digito; j++)
    if (digito % j == 0)
      divisores++;

  if (divisores == 2)
    return 1;
  else
    return 0;
}

int main() {
  char num[5];
  scanf("%s", &num);
  int i, super = 0, n = atoi(num);
  for (i = 0; i < strlen(num); i++) {
    printf("%d\n", atoi(num[i]));
    // if ( ePrimo(atoi(num[i])) ) {
      // super++;
    // }
  }
  // if ( ePrimo(n) ) {
  //   if (super == strlen(num)) {
  //     printf("Super\n");
  //   } else if (super < strlen(num)) {
  //     printf("Nada\n");
  //   } else {
  //     printf("Primo\n");
  //   }
  // }
  return 0;
}

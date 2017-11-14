#include <stdio.h>

int main() {
  int n, ano;
  scanf("%d", &n);
  do {
    scanf("%d", &ano);
    if (ano < 2015) {
      printf("%d D.C.\n", 2015 - ano);
    } else {
      printf("%d A.C.\n", ano - 2014);
    }
  } while(--n != 0);
  return 0;
}

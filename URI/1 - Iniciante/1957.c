#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

char intToHex(int x) {
  switch (x) {
    case 0: return '0';
    case 1: return '1';
    case 2: return '2';
    case 3: return '3';
    case 4: return '4';
    case 5: return '5';
    case 6: return '6';
    case 7: return '7';
    case 8: return '8';
    case 9: return '9';
    case 10: return 'A';
    case 11: return 'B';
    case 12: return 'C';
    case 13: return 'D';
    case 14: return 'E';
    case 15: return 'F';
  }
}

int main() {
  char hexa[20];
  int n, j, i = 0;
  scanf("%d", &n);
  while (n != 0) {
    hexa[i++] = intToHex(n % 16);
    n = n / 16;
  }

  for (j = i - 1; j >= 0; j--)
    printf("%c", hexa[j]);

  printf("\n");
  return 0;
}

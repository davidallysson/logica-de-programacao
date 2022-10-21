//Escreva um programa que leia 4 números e mostre o maior.

#include <stdio.h>

int main()
{
  int n1, n2, n3, n4;
  scanf("%d %d %d %d", &n1, &n2, &n3, &n4);
  if (n1 >= n2 && n1 >= n3 && n1 >= n4) {
    printf("%d", n1);
  }
  else if (n2 >= n1 && n2 >= n3 && n2 >= n4) {
    printf("%d", n2);
  }
  else if (n3 >= n1 && n3 >= n2 && n3 >= n4) {
    printf("%d", n3);
  }
  else if (n4 >= n1 && n4 >= n2 && n4 >= n3) {
    printf("%d", n4);
  }
  return 0;
}

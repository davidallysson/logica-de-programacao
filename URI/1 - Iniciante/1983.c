#include <stdio.h>

int main() {
  int n;
  long int mat, matriculaEscolhida;
  double nota = 0.0, maiorNota = 0.0;
  scanf("%d", &n);
  while (n > 0) {
    scanf("%ld %lf", &mat, &nota);
    if (nota > maiorNota) {
      maiorNota = nota;
      matriculaEscolhida = mat;
    }
    n--;
  }
  if (maiorNota >= 8.0) {
    printf("%ld\n", matriculaEscolhida);
  } else {
    printf("Minimum note not reached\n");
  }
  return 0;
}

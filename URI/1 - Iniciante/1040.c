#include <stdio.h>

int main() {
  float n1, n2, n3, n4, notaExame;
  scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
  float media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / 10;
  if (media >= 7.0) {
    printf("Media: %.1f\n", media);
    printf("Aluno aprovado.\n");
  } else if (media < 5.0) {
    printf("Media: %.1f\n", media);
    printf("Aluno reprovado.\n");
  } else {
    scanf("%f", &notaExame);
    printf("Media: %.1f\n", media);
    printf("Aluno em exame.\n");
    printf("Nota do exame: %.1f\n", notaExame);
    media = (media + notaExame) / 2.0;
    if (media >= 5.0) {
      printf("Aluno aprovado.\n");
    } else {
      printf("Aluno reprovado.\n");
    }
    printf("Media final: %.1f\n", media);
  }
  return 0;
}

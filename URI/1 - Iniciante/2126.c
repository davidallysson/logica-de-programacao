#include <stdio.h>
#include <string.h>

int main() {
  char stringMenor[99999];
  char stringMaior[99999];
  int caso = 1;
  int tamanhoStringMaior, tamanhoStringMenor;
  while (scanf("%s", &stringMenor) != EOF) {
    scanf("%s", &stringMaior);
    // Pegando o tamanho das strings
    tamanhoStringMenor = strlen(stringMenor);
    tamanhoStringMaior = strlen(stringMaior);
    // Incializando contadores
    int i, j, qtdStrings = 0, posicaoUltimaSequencia = 0;

    for (i = 0; i < tamanhoStringMaior; i++) {
      for (j = 0; j < tamanhoStringMenor; j++) {
        if (stringMaior[i + j] == stringMenor[j]) {
          if (j == tamanhoStringMenor - 1) {
            qtdStrings++;
            posicaoUltimaSequencia = i;
            break;
          } else continue;
        } else break;
      }

    }

    printf("Caso #%d:\n", caso);
    if (qtdStrings == 0) {
      printf("Nao existe subsequencia\n");
    }
    else {
      printf("Qtd.Subsequencias: %d\n", qtdStrings);
      printf("Pos: %d\n", posicaoUltimaSequencia + 1);
    }
    printf("\n");
    caso++;
  }
  return 0;
}

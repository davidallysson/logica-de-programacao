#include <stdio.h>

int main() {
  int op, inter, gremio, vitoriasInter = 0, vitoriasGremio = 0, empates = 0;
  do {
    scanf("%d %d", &inter, &gremio);
    if (inter > gremio) {
      vitoriasInter++;
    } else if (inter == gremio) {
      empates++;
    } else if (inter < gremio) {
      vitoriasGremio++;
    }
    printf("Novo grenal (1-sim 2-nao)\n");
    scanf("%d", &op);
  } while(op == 1);
  printf("%d grenais\n", (vitoriasInter + vitoriasGremio + empates));
  printf("Inter:%d\n", vitoriasInter);
  printf("Gremio:%d\n", vitoriasGremio);
  printf("Empates:%d\n", empates);
  if (vitoriasInter > vitoriasGremio) {
    printf("Inter venceu mais\n");
  } else if (vitoriasInter == vitoriasGremio) {
    printf("Nao houve vencedor\n");
  } else if (vitoriasGremio > vitoriasInter) {
    printf("Gremio venceu mais\n");
  }
  return 0;
}

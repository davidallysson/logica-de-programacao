#include <stdio.h>

int main() {
  int andar1, andar2, andar3, maquina1, maquina2, maquina3;
  scanf("%d %d %d", &andar1, &andar2, &andar3);
  maquina1 = (andar2 * 2) + (andar3 * 4);
  maquina2 = (andar1 * 2) + (andar3 * 2);
  maquina3 = (andar2 * 2) + (andar1 * 4);
  if (maquina1 <= maquina2 && maquina1 <= maquina3) {
    printf("%d\n", maquina1);
  } else if (maquina2 <= maquina1 && maquina2 <= maquina3) {
    printf("%d\n", maquina2);
  } else if (maquina3 <= maquina2 && maquina3 <= maquina1) {
    printf("%d\n", maquina3);
  }
  return 0;
}

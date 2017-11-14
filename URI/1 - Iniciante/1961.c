#include <stdio.h>

int main() {
  int p, n, i, winOrLose;
  scanf("%d %d", &p, &n);
  int canos[n];
  for (i = 0; i < n; i++)
    scanf("%d", &canos[i]);

  for (i = 1; i < n; i++) {
    if (canos[i-1] > p + canos[i]) {
      winOrLose = 0;
      break;
    } else if (canos[i-1] + p >= canos[i]) {
      winOrLose = 1;
    } else {
      winOrLose = 0;
      break;
    }
  }

  if (winOrLose == 1) {
    printf("YOU WIN\n");
  } else {
    printf("GAME OVER\n");
  }
  return 0;
}

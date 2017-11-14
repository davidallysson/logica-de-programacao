#include <stdio.h>

int main() {
  float x, y;
  scanf("%f %f", &x, &y);
  if (x == 0.0f && y == 0.0f) {
    printf("Origem\n");
  } else if (x == 0.0f) {
    printf("Eixo Y\n");
  } else if (y == 0.0f) {
    printf("Eixo X\n");
  } else if (x > 0.0f && y > 0.0f) {
    printf("Q1\n");
  } else if (x < 0.0f && y > 0.0f) {
    printf("Q2\n");
  } else if (x < 0.0f && y < 0.0f) {
    printf("Q3\n");
  } else if (x > 0.0f && y < 0.0f) {
    printf("Q4\n");
  }
  return 0;
}

#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);
  int v12 = b - a;
  int v23 = c - b;
  if (v12 < 0 && v23 >= 0) printf(":)\n");
  else if (v12 > 0 && v23 <= 0) printf(":(\n");
  else if (v12 > 0 && v23 > 0 && v23 < v12) printf(":(\n");
  else if (v12 > 0 && v23 > 0 && v23 >= v12) printf(":)\n");
  else if (v12 < 0 && v23 < 0 && v23 > v12) printf(":)\n");
  else if (v12 < 0 && v23 < 0 && v23 <= v12) printf(":(\n");
  else if (v12 == 0 && v23 > 0) printf(":)\n");
  else if (v12 == 0 && v23 <= 0) printf(":(\n");
  return 0;
}

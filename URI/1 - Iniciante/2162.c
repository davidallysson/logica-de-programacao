#include <stdio.h>

int main() {
  int n, anterior, atual, flag, resp, i;
  scanf("%d\n", &n);
  int p[n];

  for (i = 0; i < n; i++) {
    scanf("%d", &p[i]);
  }

  if (n > 2) {

    for (i = 1; i < n-1; i++) {
      if ( (p[i-1] < p[i]) && (p[i] > p[i+1]) ) {
        resp = 1;
      } else if ( (p[i-1] > p[i]) && (p[i] < p[i+1]) ) {
        resp = 1;
      } else {
        resp = 0;
        break;
      }
    }

  } else {
    if (p[1] != p[0])
      resp = 1;
    else
      resp = 0;
  }


  printf("%d\n", resp);
  return 0;
}

#include <stdio.h>
#include <string.h>

int main() {
  char subfilo[30], classe[30], ordem[30];
  scanf("%s", &subfilo);
  scanf("%s", &classe);
  scanf("%s", &ordem);
  if (subfilo[0] == 'v' && classe[0] == 'a' && ordem[0] == 'c') printf("aguia\n");
  if (subfilo[0] == 'v' && classe[0] == 'a' && ordem[0] == 'o') printf("pomba\n");
  if (subfilo[0] == 'v' && classe[0] == 'm' && ordem[0] == 'o') printf("homem\n");
  if (subfilo[0] == 'v' && classe[0] == 'm' && ordem[0] == 'h') printf("vaca\n");
  if (subfilo[0] == 'i' && classe[0] == 'i' && ordem[2] == 'm') printf("pulga\n");
  if (subfilo[0] == 'i' && classe[0] == 'i' && ordem[2] == 'r') printf("lagarta\n");
  if (subfilo[0] == 'i' && classe[0] == 'a' && ordem[0] == 'h') printf("sanguessuga\n");
  if (subfilo[0] == 'i' && classe[0] == 'a' && ordem[0] == 'o') printf("minhoca\n");
  return 0;
}

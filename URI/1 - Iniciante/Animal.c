#include <stdio.h>
#include <string.h>

int main() {
  char subfilo[30], classe[30], ordem[30];
  scanf("%s", &subfilo);
  scanf("%s", &classe);
  scanf("%s", &ordem);
  if (strcmp(subfilo, "vertebrado") == 0) {
    if (strcmp(classe, "ave") == 0) {
      if (strcmp(ordem, "carnivoro") == 0) {
        printf("aguia\n");
      } else if (strcmp(ordem, "onivoro") == 0) {
        printf("pomba\n");
      }
    }
    else if (strcmp(classe, "mamifero") == 0) {
      if (strcmp(ordem, "onivoro") == 0) {
        printf("homem\n");
      } else if (strcmp(ordem, "herbivoro") == 0) {
        printf("vaca\n");
      }
    }
  }
  else if (strcmp(subfilo, "invertebrado") == 0) {
    if (strcmp(classe, "inseto") == 0) {
      if (strcmp(ordem, "hematogafo") == 0) {
        printf("pulga\n");
      } else if (strcmp(ordem, "herbivoro") == 0) {
        printf("lagarta\n");
      }
    }
    else if (strcmp(classe, "anelideo") == 0) {
      if (strcmp(ordem, "hematogafo") == 0) {
        printf("sanguessuga\n");
      } else if (strcmp(ordem, "onivoro") == 0) {
        printf("minhoca\n");
      }
    }
  }
  return 0;
}

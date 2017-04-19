#include <stdio.h>

int main() {
  int numero1,numero2,maggiore;

  printf("inserisci il numero \t");
  scanf("%d", &numero1);
  printf("inserisci l'altro numero \t");
  scanf("%d", &numero2);

  maggiore = numero1;

  if (numero2 > maggiore);
  maggiore = numero2;

    printf ("il maggiore e' %d \n", maggiore);
  

  return 0;
}

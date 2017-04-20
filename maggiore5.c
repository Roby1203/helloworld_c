#include <stdio.h>

int main() {
  int num1,num2,num3,num4,num5,maggiore;

  printf("inserisci un numero \t");
  scanf("%d", &num1);
  printf("inserisci un numero \t");
  scanf("%d", &num2);
  printf("inserisci un numero \t");
  scanf("%d", &num3);
  printf("inserisci un numero \t");
  scanf("%d", &num4);
  printf("inserisci un numero \t");
  scanf("%d", &num5);

  maggiore = num1;

  if (num2 > maggiore){maggiore = num2;}
  if (num3 > maggiore){maggiore = num3;}
  if (num4 > maggiore){maggiore = num4;}
  if (num5 > maggiore){maggiore = num5;}

  printf("il maggiore e' %d \n", maggiore);
                                        
  return 0;
}

#include <stdio.h>

int main(){
  int numero,somma;
  printf("insersici un numero \t");
  scanf("%d", &numero);
  if (numero < 100 || numero > 1000){
    printf("Errore non e' un numero di tre cifre \n");
  return 0;
  }
  int c = numero % 10;
  int b = (numero/10) % 10;
  int a = numero / 100;
  somma = a + b + c;
  printf("la somma e'%d \n", somma);

  return 0;
};

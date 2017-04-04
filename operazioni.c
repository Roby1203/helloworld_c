#include <stdio.h>

int main() {
  int num, num1, add, sott, molt, div;
  printf("Inserisci un numero\t");
  scanf("%d", &num);
  printf("Inserisci un numero\t");
  scanf("%d", &num1);

  add = num + num1;
  printf("il risultato di %d + %d e'  %d\n", num, num1,add);
  sott = num - num1;
  printf("il risultato di %d - %d e' %d\n", num, num1, sott);
  molt = num * num1;
  printf("il risultato di %d x %d e' %d\n", num, num1, molt);
  div = num / num1;
  printf("il risulato di %d : %d e' %d\n", num,num1, div);

  return 0;
}

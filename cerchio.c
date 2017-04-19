#include <stdio.h>

int main(){
  double pi = 3.14;
  int raggio;
  double circ,super;

  printf("insersci il raggio \t");
  scanf("%d", &raggio);
  circ = pi * raggio * 2.0;
  printf ("la circonferenza e' %f\n", circ);
  super = pi * raggio * raggio;
  printf ("la superficie e' %f\n", super);

  return 0;
}

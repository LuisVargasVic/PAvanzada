#include <stdio.h>

int swap_no(int a, int b){
  int t;
  t = a;
  a = b;
  b = t;
  return 0;
}

int swap(int *a, int *b){
  int t;
  t = *a;
  *a = *b;
  *b = t;
  return 0;
}

int main(){
  int j = 27, k = 34;
  swap_no(j,k);
  printf("j = %d, k = %d \n", j, k);
  printf("j = %d, k = %d \n", j, k);
}
/*
  En C los pasos son por valores
  Usamos apuntadores para acceder a los valores que estan fuera de las funciones
  Manejar dentro de sus direcciones los contenidos
  swap(4,5) no es válida
  int d = 7;
  int c = 8;
  swap(d,c)
*/

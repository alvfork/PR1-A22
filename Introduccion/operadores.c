#include <stdio.h>

int main() {

  printf("-- Operadores logicos --\n");
  printf("Negado [not] !0 R: %d \n", !0);
  printf("Negado [not] !1 R: %d \n", !1);


  printf("\n\n -- Operadores de comparacion --\n");
  
  printf("Igualdad     5 == 5 R: %d  |  5 == 4 R: %d\n", 5 == 5, 5 == 4);
  printf("Desigualdad  5 != 5 R: %d  |  5 != 4 R: %d\n", 5 != 5, 5 != 4);
  printf("Mayor que    5 > 3  R: %d  |  5 > 10 R: %d\n", 5 > 3, 5 > 10);
  printf("Menor que    5 < 3  R: %d  |  5 < 10 R: %d\n", 5 < 3, 5 < 10);
  printf("Mayor o =    5 >= 3 R: %d  |  5 >= 5 R: %d\n", 5 >= 3, 5 >= 5);
  printf("Menor o =    5 <= 6 R: %d  |  5 <= 5 R: %d\n", 5 <= 6, 5 <= 5);


  /* x: (0, 20] U (50, 70) */
  int x = 15;

  printf("x=15 R: %d \n", (x > 0 && x <= 20) || (x > 50 && x < 70));
  x = 30;
  printf("x=30 R: %d \n", (x > 0 && x <= 20) || (x > 50 && x < 70));
 
  x = 5;
  int comp_intv = (x > 0 && x <= 20) || (x > 50 && x < 70);

  if (comp_intv) {
    printf("%d pertenece al intervalo\n", x);
  } else {
    printf("%d no pertenece al intervalo\n", x);
  }

  return 0;
}

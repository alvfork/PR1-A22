/**
 *   Se requiere calcular el promedio aritmetico de n valores flotantes
 *   los cuales seran ingresados a traves del teclado
**/

#include <stdio.h>

int main() {
  int cantidad_valores;
  float valor;
  float acumulador = 0;

  printf("\nIngrese la cantidad de valores: ");
  scanf("%d", &cantidad_valores);

  printf("\n");

  for (int i=0; i < cantidad_valores; i++) {
    printf("Introduzca el valor #%d: ", i + 1);
    scanf("%f", &valor);
    acumulador += valor;
  }

  printf("\nPromedio Aritmetico: %.2f \n\n", acumulador/cantidad_valores);

  return 0;
}

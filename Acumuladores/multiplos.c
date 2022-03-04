/**
 *   Dado n numeros enteros ingresados a traves del teclado, se requiere calcular lo siguiente:
 *   - Cantidad de numeros multiplos de 2
 *   - Cantidad de numeros multiplos de 3
 *   - Cantidad de numeros multiplos de 5
 *   - Suma de los numeros multiplos de 2
 *   - Suma de los numeros multiplos de 3
 *   - Suma de los numeros multiplos de 5
**/

#include <stdio.h>

int main() {
  int cantidad_valores;
  int valor;

  int contador_mltps_2 = 0, acumulador_mltps_2 = 0;
  int contador_mltps_3 = 0, acumulador_mltps_3 = 0;
  int contador_mltps_5 = 0, acumulador_mltps_5 = 0;

  printf("\nIngrese la cantidad de valores: ");
  scanf("%d", &cantidad_valores);

  printf("\n");

  for (int i=0; i < cantidad_valores; i++) {
    printf("Introduzca el valor #%d: ", i + 1);
    scanf("%d", &valor);

    if (valor % 2 == 0) {
      contador_mltps_2++;
      acumulador_mltps_2 += valor;
    }

    if (valor % 3 == 0) {
      contador_mltps_3 += 1;
      acumulador_mltps_3 = acumulador_mltps_3 + valor;
    }

    if (valor % 5 == 0) {
      contador_mltps_5++;
      acumulador_mltps_5 += valor;
    }

  }

  printf("\n--- Resultados: \n");
  printf("- Multiplos de 2 => cuenta: %d | suma: %d\n", contador_mltps_2, acumulador_mltps_2);
  printf("- Multiplos de 3 => cuenta: %d | suma: %d\n", contador_mltps_3, acumulador_mltps_3);
  printf("- Multiplos de 5 => cuenta: %d | suma: %d\n\n", contador_mltps_5, acumulador_mltps_5);

  return 0;
}

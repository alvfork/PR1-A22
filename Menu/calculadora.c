/**
 *   Se requiere implementar una calculadora que soporte las siguientes operaciones a traves de un menu:
 *   - (+) Suma          A + B
 *   - (-) Resta         A - B
 *   - (*) Multiplacion  A * B
 *   - (/) Division      A / B
 *   - (s) Salir
**/

#include <stdio.h>

int main() {
  char opcion = 'a';
  float a_value, b_value;

  printf("\n--- Calculadora: \n");

  while (opcion != 's') {
    printf("\n(+) Suma          A + B\n");
    printf("(-) Resta         A - B\n");
    printf("(*) Multiplacion  A * B\n");
    printf("(/) Division      A / B\n");
    printf("(s) Salir\n");

    printf("\nOperacion: ");
    scanf(" %c" , &opcion);

    if (opcion == '+' || opcion == '-' || opcion == '*' || opcion == '/') {
      printf("Ingrese A: ");
      scanf("%f", &a_value);
      printf("Ingrese B: ");
      scanf("%f", &b_value);
    }

    printf("--------------------\n");

    switch(opcion) {
      case '+': printf("Resultado: %.2f\n", a_value + b_value); break;
      case '-': printf("Resultado: %.2f\n", a_value - b_value); break;
      case '*': printf("Resultado: %.2f\n", a_value * b_value); break;
      case '/': printf("Resultado: %.2f\n", a_value / b_value); break;
      case 's': printf("Hasta luego!\n"); break;
      default: printf("*** Opcion incorrecta ***\n"); break;
    }
    printf("\n");
  }

  return 0;
}

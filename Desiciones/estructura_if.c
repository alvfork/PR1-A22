#include <stdio.h>

int main(){
  int edad;

  printf("\nIngrese edad: ");
  scanf("%d", &edad);

  printf("Edad: %d\n", edad);

  // Establecer un intervalo para una edad valida
  // (0, 110]
  // Infante       [1, 13)
  // Adolescente   [13, 18)
  // Adulto        [18, 40)
  // Adulto mayor  [40, 60)
  // Anciano       [60, 110]


  if (edad > 0 && edad <= 110) {
    if (edad >= 1 && edad < 13) {
      printf("Es un infante\n");
    } else if (edad >= 13 && edad < 18) {
      printf("Es un adolescente\n");
      printf("---");
    } else if (edad >= 18 && edad < 40) {
      printf("Es un adulto\n");
    } else if (edad >= 40 && edad < 60) {
      printf("Es un adulto mayor\n");
    } else {
      printf("Es un anciano\n");
    }
  } else {
    printf("- La edad es incorrecta \n");
  }

  return 0;
}

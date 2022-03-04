#include <stdio.h>

int main () {

  printf("-- Estructura de decision Switch --\n");

  char caracter;
  printf("Ingrese un caracter: ");
  scanf("%c", &caracter);

  // El caracter es una vocal?
  // Si el caracter es a,e,i,o,u entonces es una vocal

  /*
    if (caracter == 'a' || caracter == 'e' || caracter == 'i' || caracter == 'o' || caracter == 'u'){
      printf("El caracter es una vocal\n");
    } else {
      printf("El caracter no es una vocal\n");
    }

    if (caracter == 'a'){
      printf("El caracter es una a\n");
    } else if (caracter == 'e') {
      printf("El caracter es una e\n");
    } else if (caracter == 'i'){
      printf("El caracter es una i\n");
    } else if (caracter == 'o') {
      printf("El caracter es una o\n");
    } else if (caracter == 'u') {
      printf("El caracter es una u\n");
    } else {
      printf("El caracter no es una vocal\n");
    }
  */

  switch(caracter) {
    case 'a': printf("El caracter es una a\n"); break;
    case 'e': printf("El caracter es una e\n"); break;
    case 'i': printf("El caracter es una i\n"); break;
    case 'o': printf("El caracter es una o\n"); break;
    case 'u': printf("El caracter es una u\n"); break;
    default: printf("El caracter no es una vocal\n"); break;
  }

  return 0;
}

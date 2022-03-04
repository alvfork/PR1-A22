#include <stdio.h>

int main(){
  int numero;

  // -- Solicite un numero hasta que el usuario introduzca el numero 20

  do {
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
  } while (numero != 20);

  printf("Numero: %d\n", numero);

  return 0;
}

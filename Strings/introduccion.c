#include <stdio.h>

int main () {
  char nombre[20];
  char apellido[20];
  int edad;

  printf("Introduzca su nombre: ");
  scanf("%s", nombre);

  printf("Introduzca su apellido: ");
  scanf("%s", apellido);

  printf("Introduzca su edad: ");
  scanf("%d", &edad);

  printf("Nombre: %s Apellido: %s Edad: %d \n", nombre, apellido, edad);
  
  printf("valor: %s, direccion: %p \n", nombre, nombre);
  printf("valor: %d, direccion: %p \n", edad, &edad);

  return 0;
}

#include <stdio.h>

int main(){
  int numero;

  printf("Ingrese un numero: ");
  scanf("%d", &numero);

  for (int i = 0; i < numero; i++) {
    printf("Ciclo: %d\n", i);
  }
  
  return 0;
}

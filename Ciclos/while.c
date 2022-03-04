#include <stdio.h>

int main(){
  int numero;
  int it = 0;
  printf("Ingrese un numero: ");
  scanf("%d", &numero);

  while (it < numero) {
    printf("Ciclo: %d\n", it);
    it++;
  }

  return 0;
}

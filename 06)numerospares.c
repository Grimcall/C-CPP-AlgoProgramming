/* 6) Realice un algoritmo para generar e imprimir los números
 pares que se encuentran entre 0 y 100. */
#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int ev;

int main(){

    printf("Presiona una tecla para iniciar el algoritmo.\n");
    getch();

    for(ev = 0; ev <= 100; ev += 2)/* Incrementará de dos en dos.*/{

      printf(" %d", ev); /* Hice un mini espacio en el principio del printf para que los
                            números no se muestren pegados. */
  }
  getch();
}

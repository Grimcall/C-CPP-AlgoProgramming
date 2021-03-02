/* 5) Se requiere un algoritmo para determinar cuánto ahorrará una persona en un año,
si al final de cada mes deposita variables cantidades de dinero; además,
se requiere saber cuánto lleva ahorrado cada mes. */
#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int mes, ev;
float ahorro, ahorroTotal;

int main(){

  for(ev=1;ev<=12;ev++){

        printf("\nIndique cuanto se ha ahorrado el mes %d: ", ev);
          scanf("%f", &ahorro);
        printf("Se han ahorrado $%0.2f hasta ahora.\n", ahorroTotal+=ahorro);
        /* Uno puede establecer operaciones matematicas para mostrar en un 'print'.
           Pero, si se hace múltiples veces (que fue un error que cometí) y se establece
           adelante en el código, se acumularan ambos. Pendiente con eso.
           Ejemplo fuera que aquí colocoara:

           ahorroTotal+=ahorro;

           En vez de sumarse una vez, se sumara dos veces porque ya lo establecí en el
           termino de arriba. Muy pendiente con eso.*/

  }
      printf("\nEl total ahorrado para el año es $%f ", ahorroTotal);
getch();
}

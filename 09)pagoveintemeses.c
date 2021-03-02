/* Una persona adquirió un producto para pagar en 20 meses.
El primer mes pagó $10,
el segundo $20,
el tercero $40 y así sucesivamente.
Realice un algoritmo para determinar cuánto debe pagar mensualmente y el total
de lo que pagó después de los 20 meses */
#include <ctype.h>
#include <stdio.h>
#include <conio.h>
//No estoy seguro de este, pero asumo de que es así.
int ev, pagoInicial = 10, pagoFinal = 0;

int main(){
   printf("Presione una tecla para iniciar el algoritmo.");
   getch();

        for(ev = 1; ev <= 20; ev++){
          printf("\nPara el mes #%d se paga: $%d.", ev, pagoInicial);
          /* Para los ciclos se debe leer en orden: primero muestro el pago inical guardado
          que es '10', como ya fue indicado. Luego, esa misma variable "pagoInicial" se va
          a multiplicar por 2 en el siguiente paso, y posterior a eso se sumará al pagoFinal.
          <<Pila con eso.>> */
          pagoInicial = (pagoInicial * 2);
          pagoFinal+= pagoInicial;
          getch();
        }
    printf("\nEl total pagado al final del ciclo es de $%d.", pagoFinal);
}





//antonio es gay

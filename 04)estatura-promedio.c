/* 4) Se requiere un algoritmo para obtener la estatura promedio de un grupo de
personas, cuyo número de miembros se desconoce, el ciclo debe efectuarse
siempre y cuando se tenga una estatura registrada */
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
/* Este fue una ladilla. */
float estatura, total=0, promedio;
int personas=0; /* Es muy importante indicar los valores iniciales para varias
                  de estas variables, especialmente para aquellas que se van a sumar.*/
int main(){
for(;;){ /* for(;;) es una terminología que se utiliza solamente cuando
            se desea que el ciclo sea infinito. */

      printf("\nIndique la estatura de la persona en metros. \n"); /* \n es basicamente
                                                                      decir: punto y aparte.*/
      printf("(Si no desea continuar, tipee 0) \n");
      printf("Estatura: ");
        scanf("%f",&estatura);

total+=estatura; /* Estatura se va a ir sumando y añadiendo al total. */

        if(estatura != 0) {personas += 1;} /* Esto se traduce como: si el valor que yo
                                              coloque en estatura es diferente de cero,
                                              sumaré una persona (que es necesario para
                                              sacar el promedio al final y es otra razón
                                              por la que defino el valor inicial de 'personas'
                                              como '0'). */

        else {break;} /* Esto se traduce como: si el valor de estatura es '0', el ciclo se rompe.
                          'break' se utiliza para esto: para romper funciones o ciclos en general;
                          si tal condición se cumple, el ciclo se rompe. */
  }
                promedio = total/personas;
  printf("\nEl total de personas registradas es: %d\n", personas);
  printf("El promedio de estatura es: %0.2f metros", promedio);

  getch();
}

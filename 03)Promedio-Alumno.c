/* 3) Se requiere un algoritmo para obtener la edad promedio de un grupo de N
alumnos. Se lee la edad del alumno. */

#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int edad, n, ev, total = 0, promedio; /* Promedio tambien puede ser 'float' */

int main(){

  printf("Introduzca la cantidad de alumnos: ");
    scanf("%d", &n);

          for(ev = 1; ev <= n; ev++){ /* Indico que 'ev' empieza en '1',
                                      y termina con cualquier valor que yo haya
                                      puesto como 'n'. El ciclo se rompe cuando
                                      'ev' se iguale a 'n'. */

            printf("Introduzca la edad del alumno #%d: ", ev);
              scanf("%d", &edad);

                          total += edad;
           }
                          promedio = (total/n);

  printf("El promedio de edad en el salon es: %d", promedio);

getch();
}

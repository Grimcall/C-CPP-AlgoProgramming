/* Una empresa les paga a sus empleados con base en las horas trabajadas en la semana.
Realice un algoritmo para determinar el sueldo semanal de N trabajadores y,
 además, calcule cuánto pagó la empresa por los N empleados.
 Se lee el número de empleados.*/
#include <ctype.h>
#include <stdio.h>
#include <conio.h>

int numeroEmpleados, ev;
float sueldoHora, horasTrabajadas, gastoEmpresa=0;

int main(){

  printf("Introduzca el numero de empleados: ");
    scanf("%d", &numeroEmpleados);
  printf("Introduzca el sueldo por hora establecido: ");
    scanf("%f", &sueldoHora);

    for(ev = 1; ev <= numeroEmpleados; ev++){
      printf("\nIntroduzca las horas trabajadas por el empleado #%d: ", ev);
        scanf("%f", &horasTrabajadas);
      printf("El empleado #%d cobrara $%0.2f", ev, horasTrabajadas*sueldoHora); /* Si esto lo coloco aquí, no se irá aumentando. */

      gastoEmpresa+= (horasTrabajadas*sueldoHora);
    }
    printf("\nLa empresa gastara un total de $%0.2f.", gastoEmpresa);
    getch();
}

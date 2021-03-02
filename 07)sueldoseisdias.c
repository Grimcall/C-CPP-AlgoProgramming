/* Una empresa tiene el registro de las horas que trabaja diariamente un empleado
durante la semana (seis días) y requiere determinar el total de éstas,
así como el sueldo que recibirá por las horas trabajadas.
Se lee el pago por hora y las horas trabajadas. */
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int dia;
float sueldoHora, pagoTotal = 0, horasDia, horasSemana = 0;

int main(){

  printf("Introduzca el sueldo por hora: ");
    scanf("%f", &sueldoHora);

      for(dia = 1; dia <= 6; dia++){
          printf("\nIndique las horas trabajadas el dia #%d: ", dia);
            scanf("%f", &horasDia);

            horasSemana+= horasDia;
  }
            pagoTotal = (sueldoHora*horasSemana);
    printf("\nEl pago total es de $%0.2f", pagoTotal);
    getch();
}

/*
Suponga que tiene tres calificaciones, de las cuatro que tres alumnos obtuvieron
durante el período escolar. Esta información se puede almacenar de
tal forma que los renglones representen las calificaciones de cada alumno,
mientras que las columnas representen esas calificaciones, pero de cada materia
en especial.
Cargue los nombres de los alumnos y los nombres de las materias; luego el
usuario puede cargar las notas de los alumnos de manera desordenada, es
decir deben buscar la coincidencia del nombre en la fila y de la materia en la
columna. Aparte debe calcular el promedio de cada uno de ellos e indicar el
nombre del alumno que obtuvo el mayor promedio. Imprimir toda la
información.
*/
include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

char nombres[3][30], materias[4][30], nombreAux[12][30], materiasAux[12][30];
float notaTemp, tablaPromedios[3][4], promediosFinales[3], promediosTemp;
int i, j, x, y, u, v, a, b;

int main(){

int N_ALUMNOS = 3;
int N_MATERIAS = 4;

  printf("Introduzca los nombres de los alumnos(3): \n");

  for(i = 0; i < N_ALUMNOS; i++){
    printf("Nombre: ");
      scanf("%s", &nombres[i]);
  }
  printf("\nIntroduzca las materias cursadas(4): \n");
  for(i = 0; i < N_MATERIAS; i++){
    printf("Materia: ");
      scanf("%s", &materias[i]);
  }

  printf("\n A continuacion, introduzca los nombres de los alumnos con sus respectivas materias y sus notas.\n");
  getch();
    for(i = 0; i < N_ALUMNOS; i++){
      notaTemp = 0;
      for(j = 0; j < N_MATERIAS; j++){

        Repeat:printf("Nombre: ");
          scanf("%s", &nombreAux[i]);
        printf("Materia: ");
          scanf("%s", &materiasAux[j]);
        printf("Nota: ");
          scanf("%f", &notaTemp);

                u = 0;
                v = 0;
                for(x = 0; x < N_ALUMNOS; x++){
                  for(y = 0; y < N_MATERIAS; y++){
                    a = strcasecmp(nombreAux[i], nombres[x]);
                    b = strcasecmp(materiasAux[j], materias[y]);
                    if( a == 0 && b == 0){ goto Salida;}
                  }
                }
          Salida:if(a == 0 && b == 0){
            u = x;
            v = y;
            tablaPromedios[u][v] += notaTemp;

          }
          else { printf("\nDatos incorrectos. Intente de nuevo."); goto Repeat; }
      }

    }



    printf("NOTAS---------------------------------\n");
     for(i = 0; i < N_ALUMNOS; i++){ //Init 01

      printf("%s", nombres[i]);

       for(j = 0; j < N_MATERIAS; j++){ //Init 02

         printf("| %s: ", materias[j]);
          printf("%0.2f |", tablaPromedios[i][j]);

       } //Fin 02

       for(i = 0; i < N_ALUMNOS; i ++){
        promediosTemp = 0;
        for(j = 0; j < N_MATERIAS; j++){
          promediosTemp += (tablaPromedios[i][j]/N_MATERIAS);
        }
        promediosFinales[i] = promediosTemp;
        printf("\n%s : [%0.2f]", nombres[i], promediosFinales[i]);
      }




















}



} // Fin Main

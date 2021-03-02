
/* Cargar alumnos, ordenar del ppromedio mayor a menor. Easy. */
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
char alumno[5][30];
int n, i, j, nota[5], orden[5], mayor;

int main(){

  printf("Indique la cantidad de alumnos: ");
    scanf("%d", &n);

      for(i=0; i<n; i++){

        printf("Ingrese el nombre y su nota correspondiente: ");
          scanf("%s", &alumno[i]);
          scanf("%d", &nota[i]);
          orden[i] = nota[i];

      }
      getch();

      int nota_temporal;
      char nombre_temporal[5][30];

      for(i=0; i<n-1; i++){
        for(j=0; j<n-1; j++){
          if(orden[j] < orden[j+1]) { // Si es '<', va descendiente.
                                      // Si es '>', va ascendiente.

            nota_temporal = orden[j];
            orden[j] = orden[j+1];
            orden[j+1] = nota_temporal;

			      strcpy(nombre_temporal, alumno[j]); // No se pueden igualar chars. Se hace con strcpy.
            strcpy(alumno[j], alumno[j+1]);
            strcpy(alumno[j+1], nombre_temporal);
          }
        }
      }

    printf("\nLas notas de mayor a menor son: \n\n");
    printf("--------------------------------\n");

      for(i=0 ; i<n; i++){

      printf("%s: %d\n", alumno[i], orden[i]); //Esto cambia y queda así.

    }

    printf("\n--------------------------------");
      printf("\n **La nota mayor corresponde a %s**", alumno[mayor]);

    getch();
    return 0;
      }

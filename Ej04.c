/* Se tiene un arreglo de 15 filas y 12 columnas. Realice un algoritmo
que permita leer el arreglo y calcule y presente los resultados siguientes:
El menor elemento del arreglo
La suma de los elementos de las 12 primeras filas del arreglo
El total de elementos negativos en la matriz. Por columnas.*/
#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int i, j, matriz[15][12], x, negativos;

int main(){

    printf("Introduzca los valores para la matriz 15x12. \n");
      for(i = 0; i < 15 ; i++) { //Filas
          for(j = 0; j < 12; j++){ //Columnas
              printf("Espacio [%d][%d]: ", i,j);
                scanf("%d", &matriz[i][j]); }

             }

              printf("\n--------------------- \n");
                  for(i = 0; i < 15; i++) {
                    for(j = 0; j < 12; j++)

                      printf(" (%d) ", matriz[i][j]);
                      printf("\n"); }
          getch();

          int menor = matriz[0][0];
          int mayor = matriz[0][0];
          for (i = 0; i < 15; i++) {
                  for (j = 0; j < 12; j++) {
                       x = matriz[i][j];
                      if (x > mayor) mayor = x;
                      else if (x < menor) menor = x;
                  }
              }
   printf("Mayor: %d\n", mayor);
   printf("Menor: %d\n", menor);
   printf("--------------------------\n");
                int total = 0;
          for (i = 0; i < 12; i++){
            for(j = 0; j < 12; j++){

              total += matriz[i][j];
          }
          }
            printf("Suma de las 12 primeras filas: [%d]\n", total);
            printf("--------------------------\n");

            for (i = 0; i < 15; i++){
              for(j = 4; j < 9; j++){
                  if (matriz[i][j] < 0) negativos+=1;
            }
            }
            printf("El total de negativos es: [%d]", negativos);
            getch();
            }

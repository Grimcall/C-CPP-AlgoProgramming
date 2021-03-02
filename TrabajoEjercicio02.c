#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int matrix[10][10], i, j, x, y, u, v, mayor, menor;

int main(){

    printf("Introduzca el numero de filas: ");
      scanf("%d", &i);
    printf("Introduzca el numero de columnas: ");
      scanf("%d", &j);
    printf("\n");

      for(x=1; x<=i; x++){
        for(y=1; y<=j; y++){
          printf("Valor para [%d][%d]: ", x,y);
            scanf("%d", &matrix[x][y]);
        }
      }
clrscr();

      printf("Usted introdujo la siguiente matriz: \n");
        for(x=1; x<=i; x++){
            for(y=1; y<=j; y++)
              printf(" [%d] ", matrix[x][y]);
              printf("\n");
    }
getch();

      for(x=1; x<=i; x++){

        for(y=1; y<=j; y++){

          mayor = matrix[x][1];

            for(v=1; v<=i; v++){

              if(mayor > matrix[x][v])
              mayor = matrix[x][v];
            }

              menor = matrix[1][y];
                for(u=1; u<=j; u++){

                    if(menor < matrix[u][y])
                    menor = matrix[u][y];

            }
                  if (matrix[x][y] == mayor && matrix[x][y]==menor)
                  printf("\nPunto de silla: [%d] en la posicion [%d][%d]. ", matrix[x][y], x,y);
        }
      }
getch();
}

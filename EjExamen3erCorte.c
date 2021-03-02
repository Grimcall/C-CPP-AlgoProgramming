/*
No recuerdo el titulo de este.
Trata de que tienes cierta cantidad de vendedores, y unos articulos que venden c/u.
Cada vendedor corresponde a una fila, y cada articulo corresponde a una columna. Easy.
Si no recuerdo mal, creo que se cargaba de manera desordenada y el programa debía localizar
al vendedor adecuado.
*/
#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>
char vendedores[5][100], articulos[4][100];
int i, j, n, x, u, v, a, b;
float precioArticulo[4], destino[5][4], totalV, totalA, total;


int main(){

int N_VENDEDORES = 5; //Orig. 5, max 5.
int N_ARTICULOS = 4; // Orig. 4, max 4.

  printf("--------------------\n");
  printf("Introduzca los nombres de los vendedores: \n");


  for(i = 0; i < N_VENDEDORES; i++){

    printf("Nombre Vendedor: ");
      scanf("%s", &vendedores[i]);


  }
  printf("\n------------------------\n");
  printf("Introduzca los nombres y precios de los articulos: \n");


  for(i = 0; i < N_ARTICULOS; i++){

    printf("Nombre Articulo: ");
      scanf("%s", &articulos[i]);
    printf("Precio Articulo: ");
      scanf("%f", &precioArticulo[i]);


  }

    printf("\n-------------------------\n");
  printf("Introduzca el numero de ventas: ");
    scanf("%d", &n);
    char vendedorAux[n][100];
    char articulosAux[n][100];


    for(x = 0; x < n; x++){
        Repeat:printf("Nombre?: ");
          scanf("%s", &vendedorAux[x]);
        printf("Articulo?: ");
          scanf("%s", &articulosAux[x]);

                                                     u = 0;
                                                     v = 0;
          for(i = 0; i < N_VENDEDORES; i++){
      		for(j = 0; j < N_ARTICULOS; j++){
			a = strcasecmp(vendedorAux[x], vendedores[i]);
			b = strcasecmp(articulosAux[x], articulos[j]);
			if(a == 0 && b == 0){ goto Salida; }
    } //Fin Ciclo 'j'
  } //Fin ciclo 'i'
   		Salida:if(a == 0 && b == 0){
		      u = i;
		      v = j;
        destino[u][v] += precioArticulo[j];}
        else{ printf("\nDatos Incorrectos. Intente de nuevo.\n\n"); goto Repeat; }
    } //Fin Ciclo 'x'



    for(i = 0; i < N_VENDEDORES; i++){
      for(j = 0; j < N_ARTICULOS; j++){
        if(destino[i][j] > 0 )printf("\n-%s vendio %s por: $%0.2f", vendedores[i], articulos[j], destino[i][j]);
      }
    }

        printf("\n-------------------------\n");

    for(i = 0; i < N_VENDEDORES; i++){ //Total Vendedores
    	totalV = 0;
      for(j = 0; j < N_ARTICULOS; j++){
      			                     totalV += destino[i][j];
      }
      		printf("\n-Total de vendido por %s: $%0.2f", vendedores[i], totalV);
      		                            total+=totalV;
    }


        printf("\n-------------------------\n");
    for(i = 0; i < N_ARTICULOS; i++){ //Total Articulos
    	totalA = 0;
      for(j = 0; j < N_VENDEDORES; j++){
      			                       totalA += destino[j][i];

      }
      	printf("\n-Ganancias por %s: $%0.2f", articulos[i], totalA);
    }
        printf("\n-------------------------\n");
    	printf("\n-Acumulado total: $%0.2f", total);
    getch();
}

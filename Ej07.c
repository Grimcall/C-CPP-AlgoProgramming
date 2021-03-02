/* Se tienen dos matrices cuadradas (de 12 filas y 12 columnas cada una).
Realice un algoritmo que lea los arreglos y que determine si la diagonal principal
de la primera es igual a la diagonal principal de la segunda.
(Diagonal principal es donde los subíndices I, J son iguales).*/
#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int A[4][4], B[4][4], i, j, diagA[4][4], diagB[4][4], respuesta=0;

int main(){

printf("Introduzca su primera matriz 4x4: \n");

    for(i = 0; i < 4; i++ ){ // Cargar matriz A.
        for(j = 0; j < 4; j++){

    printf("Espacio [%d][%d]: ", i, j);
      scanf("%d", &A[i][j]);
  }}

printf("Matriz A: \n");
printf("------------------\n");
    for(i = 0; i < 4; i++){ // Mostrar matriz A.
        for(j = 0; j < 4; j++)
    printf("[%d] ", A[i][j]);
    printf("\n");
}
printf("------------------\n");
      getch();

printf("\n");
printf("Introduzca su segunda matriz 4x4: \n");

    for(i = 0; i < 4; i++ ){ // Cargar matriz B.
        for(j = 0; j < 4; j++){

    printf("Espacio [%d][%d]: ", i, j);
      scanf("%d", &B[i][j]);
  }}

printf("Matriz B: \n");
printf("------------------\n");
    for(i = 0; i < 4; i++){ // Mostrar matriz B.
        for(j = 0; j < 4; j++)
    printf("[%d] ", B[i][j]);
    printf("\n");
}
printf("------------------\n\n\n");
      getch();

printf("Diagonal A: \n");
printf("------------------\n");
    for(i = 0; i < 4; i++ ){ // cargar diagA.
        for(j = 0; j < 4; j++){

      if(i==j) {diagA[i][j] = A[i][j];} /* Es importante colocar tu vector
                                      "destino" de primero. */
}}
    for(i = 0; i < 4; i++){ // Mostrar diagA.
        for(j = 0; j < 4; j++)
    printf("[%d] ", diagA[i][j]);
    printf("\n");
}
printf("------------------\n");
      getch();

printf("Diagonal B: \n");
printf("------------------\n");
    for(i = 0; i < 4; i++ ){ // cargar diagB
        for(j = 0; j < 4; j++){

      if(i==j) {diagB[i][j] = B[i][j];} /* Es importante colocar tu vector
                                      "destino" de primero. */
}}
    for(i = 0; i < 4; i++){ // Mostrar diagB.
        for(j = 0; j < 4; j++)
    printf("[%d] ", diagB[i][j]);
    printf("\n");
}
printf("------------------\n");

    for (i = 0; i < 4; i++){ // Condicional para determinar igualdad
        for(j = 0; j < 4; j++){
      if (diagA[i][j] == diagB[i][j]) { respuesta = 1; }
      else if (diagA[i][j] != diagB[i][j]){ respuesta = 0; goto Final; }
      /* Aquí estaba utilizando "break" donde está "goto", pero leí que al utilizar
      break cuando hay un bucle dentro de otro bucle, solo sale del bucle interno
      pero no los demás (en este caso, el bucle que trabaja con J).
      La función "goto" se traduce como "ir a", y lo que hace es basicamente
      saltar a la funcion donde se encuentra la variable que coloco despues de ella
      (en este caso, es Final)*/
}}

  /* El "goto" salta para acá >>>> */ Final: if(respuesta == 1) printf("Las diagonales prncipales son iguales. [%d]", respuesta);
    else printf("Las diagonales principales son distintas. [%d]", respuesta);
      getch();
}

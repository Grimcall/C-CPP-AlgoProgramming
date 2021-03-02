/* Elabore un programa que cargue un vector con una palabra e indique cuantas vocales consonantes u otros. */
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>

char palabra[500];
int longitud, vocales = 0, consonantes = 0, i;

int main(){

  printf("Introduzca una palabra: ");

   gets(palabra); // Sirve como un scanf para un vector de un solo espacio.

    longitud = strlen(palabra); // Strlen cuenta los caracteres en un vector (incluye espacios).

    for(i = 0; i < strlen(palabra); i++){ //Ciclo para contar vocales.

      if(  tolower(palabra[i]) == 'a') vocales+=1; // 'tolower'  coloca un caracter en minuscula.
      if(  tolower(palabra[i]) == 'e') vocales+=1; // 'toupper' lo pasa a mayuscula.
      if(  tolower(palabra[i]) == 'i') vocales+=1;
      if(  tolower(palabra[i]) == 'o') vocales+=1;
      if(  tolower(palabra[i]) == 'u') vocales+=1;
    }

    printf("Caracteres: %d\n", longitud);
    printf("Vocales: %d\n", vocales);
                      consonantes = (strlen(palabra)) - (vocales);
    printf("Consonantes: %d.\n", consonantes);
    getch();
}

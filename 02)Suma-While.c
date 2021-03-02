/* 2) Se requiere un algoritmo para obtener la suma de diez cantidades
mediante la utilización de un ciclo Repite. */
#include <stdio.h>
#include <conio.h>
#include <ctype.h>
/*Para ciclos, tomas un evento tal (normalmente definido como 'i' o 'ev')
y escribes las veces que ese evento debería repetirse. Si yo quiero que un programa
se repita 10 veces del 1 al 10, debo asegurarme que los numeros que se produzcan
entre su primer momento y el último sean 10.

Para 'while, a diferencia de 'for', solo indicas el evento final dentro del
paréntesis. El evento inicial y la manera en que aumentará deberán indicarse
en otras posiciones del código (en el caso de este ejercicio, se indicó
que ev=1, y dentro del ciclo while tambien indicanos que iba a incrementar
de 1 en 1 [ev++]), por lo tanto considero a los ciclos de tipo 'while' como
mas fléxibles pero también mas complicados. Realmente prefiero 'for' donde
indicas todo de una buena vez.*/


int main(){
              int ev = 1, n, suma = 0;

    while(ev <= 10){
      printf("Indique el valor #%d: ", ev);
        scanf("%d", &n);
              suma += n;
    ev++;
    }
    printf("El valor total es: %d", suma);
    getch();
}

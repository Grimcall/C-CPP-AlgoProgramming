/* 1) Se requiere un algoritmo para obtener la suma de diez cantidades
mediante la utilización de un ciclo Desde. */
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

/*Para ciclos, tomas un evento tal (normalmente definido como 'i' o 'ev')
y escribes las veces que ese evento debería repetirse. Si yo quiero que un programa
se repita 10 veces del 1 al 10, debo asegurarme que los numeros que se produzcan
entre su primer momento y el último sean 10.
Ejemplos en 'for':
i=0; i<10;i++
i=1; i<=10;i++

Si podemos observar, dividimos el ciclo for en tres:
El evento base (i=0)
El evento final (i<10)
y como aumenta. (i++) o tambien puede ser (i+=2) para ir de dos en dos.
Cada vez que se repita el ciclo, el evento aumentará */

int main(){
              int ev, n, suma = 0; //Es importante indicar el valor inicial de las sumas.

    for(ev = 1; ev <=10; ev++){ //Traducción: 'ev' empieza en 1, terminará en 10, y sumará +1 por ciclo.
      printf("Indique el valor a sumar #%d:", ev);
        scanf("%d", &n);

              suma += n;
    }
    printf("La suma total es: %d", suma);
    getch();
}

/*8) Un empleado de la tienda “Tiki Taka” realiza N ventas durante el día,
 se requiere saber cuántas de ellas fueron mayores a $1000,
 cuántas fueron mayores a $500 pero menores o iguales a $1000,
 y cuántas fueron menores o iguales a $500. Se lee el número de ventas.*/
 #include <stdio.h>
 #include <conio.h>
 #include <ctype.h>

int ev, n, a = 0, b = 0, c = 0;  // 'n' son nro de ventas; a' son mayores a $1000; $500 <'b'<= $1000;  $0 < 'c' <= $500
float monto, montoTotal = 0;

int main(){

  printf("Introduzca el numero de ventas: ");
    scanf("%d", &n);

        for(ev = 1; ev <= n; ev++){ /* Recordemos que 'ev' son lo eventos, y el ciclo se romperá
                                        cuando su valor se iguale al de 'n'. */

          printf("\nIntroduzca el monto para la venta #%d: ", ev);
            scanf("%f", &monto);

                montoTotal += monto;

            if(monto > 1000){ a+=1; } /* Mismo principio que el ejercicio #4, donde
                                         entro en un condicional si se cumplen tales condiciones.*/
            else if(monto > 500 && monto <=1000) { b+=1 ;}
            else{ c+=1; }
  }
    printf("\nLas ventas mayores a $1000 fueron: %d", a);
    printf("\nLas ventas mayores a $500 y menor o iguales a $1000 fueron: %d", b);
    printf("\nLas ventas menor o iguales a $500 fueron: %d", c);
    printf("\nEl total vendido es de: $%0.2f", montoTotal);
    getch();
}

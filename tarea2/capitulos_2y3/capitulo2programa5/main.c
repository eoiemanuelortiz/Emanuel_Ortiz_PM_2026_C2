#include <stdio.h>
#include <math.h>

void main(void)
{
 int OP, T;
 float RES;
 printf("Ingrese l opcion del calculo y el valor entero: ");
 scanf("%d %d", &OP, &T);
 switch(OP)
 {
     case 1: RES = T / 5;
       break;
    case 2: RES = pow (T,T);
        break;
    default: RES = 1;
        break;
}
 printf("\nResultado:   %7.2f", RES);
}

#include <stdio.h>

/* Trasponer una matriz.
El programa, al recibir como dato una matriz de tipo entero de 10x10,
obtiene la traspuesta. */

const int TAM = 10;

void Lectura(int [][TAM], int);
void Trasponer(int [][TAM], int [][TAM], int);
void Imprime(int [][TAM], int);

void main(void)
{
    int MAT[TAM][TAM], TRA[TAM][TAM], N;
    do
    {
        printf("Ingrese el tamaño de la matriz: ");
        scanf("%d", &N);
    }
    while (N > TAM || N < 1);

    Lectura(MAT, N);
    Trasponer(MAT, TRA, N);
    Imprime(TRA, N);
}

void Lectura(int A[][TAM], int n)
/* La función Lectura se utiliza para leer un arreglo bidimensional
de tipo entero de n filas y n columnas. */
{
    int I, J;
    for (I=0; I<n; I++)
        for (J=0; J<n; J++)
        {
            printf("Ingrese el elemento %d %d: ", I+1, J+1);
            scanf("%d", &A[I][J]);
        }
}

void Trasponer(int M1[][TAM], int M2[][TAM], int n)
/* Esta función se utiliza para obtener la traspuesta de una matriz. */
{
    int I, J;
    for (I=0; I<n; I++)
        for (J=0; J<n; J++)
            M2[I][J] = M1[J][I];
}

void Imprime(int A[][TAM], int n)
/* Esta función se utiliza para imprimir un arreglo bidimensional
de tipo entero de n filas y n columnas. */
{
    int I, J;
    for (I=0; I<n; I++)
        for (J=0; J<n; J++)
            printf("\nElemento %d %d: %d", I+1, J+1, A[I][J]);
}

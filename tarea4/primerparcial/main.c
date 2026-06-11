#include <stdio.h>
#include <stdlib.h>

/* Programa de Jugadas de Lotería */

int main() {
    int opcion;
    int max_jugadas = 0;
    int jugadas_realizadas = 0;

    int numeros_jugados[100];
    float dinero_jugado[100];

    int i, num_temp;
    float dinero_temp;

    do {

        printf("\n--- MENU DE LOTERIA ---\n");
        printf("1. Elegir cantidad de jugadas\n");
        printf("2. Jugar\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                do {
                    printf("\nIngrese la cantidad maxima de jugadas a realizar (1 a 100): ");
                    scanf("%d", &max_jugadas);
                    if (max_jugadas < 1 || max_jugadas > 100) {
                        printf("Cantidad invalida. Intente de nuevo.\n");
                    }
                } while (max_jugadas < 1 || max_jugadas > 100);

                printf("Se ha configurado un limite de %d jugadas.\n", max_jugadas);
                jugadas_realizadas = 0;
                break;

            case 2:
                if (max_jugadas == 0) {
                    printf("\n[ERROR] Primero debe elegir la cantidad de jugadas (Opcion 1).\n");
                } else {
                    printf("\n--- REGISTRO DE JUGADAS ---\n");
                    jugadas_realizadas = max_jugadas;

                    for (i = 0; i < max_jugadas; i++) {
                        printf("\nJugada #%d:\n", i + 1);

                        do {
                            printf("Ingrese un numero (1 a 40): ");
                            scanf("%d", &num_temp);
                            if (num_temp < 1 || num_temp > 40) {
                                printf("Numero fuera de rango. Reintente.\n");
                            }
                        } while (num_temp < 1 || num_temp > 40);

                        do {
                            printf("Ingrese la cantidad de dinero apostada: $");
                            scanf("%f", &dinero_temp);
                            if (dinero_temp <= 0) {
                                printf("La cantidad debe ser mayor a cero. Reintente.\n");
                            }
                        } while (dinero_temp <= 0);

                        numeros_jugados[i] = num_temp;
                        dinero_jugado[i] = dinero_temp;
                    }

                    printf("\n--- RESUMEN DE SUS JUGADAS Y PREMIOS POSIBLES ---\n");
                    for (i = 0; i < jugadas_realizadas; i++) {
                        float premio = dinero_jugado[i] * 1000.0;
                        printf("Jugada #%d -> Numero: %d | Dinero apostado: $%.2f | Premio si gana: $%.2f\n",
                                i + 1, numeros_jugados[i], dinero_jugado[i], premio);
                    }
                }
                break;

            case 3:
                printf("\nGracias por utilizar el programa de loteria. ¡Saliendo!\n");
                break;

            default:
                printf("\nOpcion incorrecta. Por favor seleccione una opcion valida (1, 2 o 3).\n");
                break;
        }

    } while (opcion != 3);

    return 0;
}

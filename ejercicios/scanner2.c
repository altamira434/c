#include <stdio.h>
#include <stdlib.h>

int main() {

    int elementos_actuales = 0;
    int capacidad = 2;

    int *espacio = (int *) malloc(2 * sizeof(int));
    int codigo;

    printf("-----------------\nESCANEO AUTOMOTRIZ\n-----------------\n");

    while (1) {
        if (elementos_actuales == capacidad) {

            capacidad *= 2;

            int *temp = (int *) realloc(espacio, capacidad * sizeof(int));

            if (temp == NULL) {
                printf("No hay suficiente memoria RAM para continuar");
                break;
            }

            espacio = temp;

            printf("[ADVERTENCIA] La capacidad de elementos se aumento a %d\n", capacidad);



        }


        if (scanf("%d", &codigo) != 1) {
            printf("Entrada no valida\n");
            break;
        }

        if (codigo == -1) {
            printf("Decidiste salir del programa\n");
            break;
        }

        *(espacio + elementos_actuales) = codigo;
        elementos_actuales++;
    }

    printf("-- REPORTE DE CODIGOS REGISTRADOS --\n");



    if (elementos_actuales == 0) {
        printf("No se registro ningun codigo de falla\n");
    } else {


    for (int i = 0; i < elementos_actuales; i++) {
        printf("Indice: %d | Dirección: %p | Valor: %d\n", i, (void *) (espacio + i), *(espacio + i));
    }
}

    free(espacio);
    espacio = NULL;

    return 0;
}

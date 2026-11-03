#include <stdio.h>
#include <stdlib.h>

/*
 * Cuarto problema a resolver usando el cerebro con C.
 * Conflicto: Pide una cantidad de codigos de falla para registrarlos pidiendo prestado
 * RAM en Heap.
 */

int main () {

    int num_codigos;

    printf("¿Cuántos códigos de falla desea registrar en este escaneo?: ");
    scanf("%d", &num_codigos);

    int *espacio = (int *) malloc(num_codigos * sizeof(int));

    if (espacio == NULL) {
        printf("No hay espacio en la memoria RA\n");
        return 1;
    }


    // Agregando los codigos de falla
    for (int i = 0; i < num_codigos; i++) {
        printf("Ingresa el codigo para la posición %d: ", i + 1);
        scanf("%d", (espacio + i));

    }


    printf("-- CODIGOS REGISTRADOS --\n");

    for (int i = 0; i < num_codigos; i++) {
         printf("Indice: %d | Codigo: %d | Dirección de memoria: %p\n", i + 1, *(espacio + i), (void*) (espacio + i));
    }


    // Liberando el espacio
    free(espacio);

    espacio = NULL;


    return 0;
}

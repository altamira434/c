#include <stdio.h>
#include <stdlib.h>

int main() {
    size_t cantidad_elementos = 536870912; // Los 2 GB

    int *gigante = (int *) malloc(cantidad_elementos * sizeof(int));

    if (gigante == NULL) {
        printf("No hay memoria.\n");
        return 1;
    }

    printf("Memoria pedida. Ahora vamos a llenarla...\n");

    // AQUÍ ES DONDE EL PROCESADOR SUDA: Escribimos en cada casilla
    for (size_t i = 0; i < cantidad_elementos; i++) {
        *(gigante + i) = 101; // Metemos el código 101 en todo el bloque de 2GB
    }

    printf("¡2 GB rellenados con éxito!\n");

    free(gigante);
    gigante = NULL;

    return 0;
}

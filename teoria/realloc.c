#include <stdio.h>
#include <stdlib.h>

int main() {
    int capacidad_inicial = 2;

    // 1. Pedimos espacio inicial para 2 códigos
    int *codigos = (int *) malloc(capacidad_inicial * sizeof(int));
    if (codigos == NULL) return 1;

    // Metemos los primeros dos códigos
    *(codigos + 0) = 101;
    *(codigos + 1) = 104;

    printf("Espacio inicial (2 elementos) creado en: %p\n", (void*)codigos);

    // --- SORPRESA: ¡Llegan más códigos de falla y necesitamos más espacio! ---
    int nueva_capacidad = 4;

    // 2. Usamos realloc para estirar el bloque a 4 elementos
    int *temp = (int *) realloc(codigos, nueva_capacidad * sizeof(int));

    if (temp == NULL) {
        printf("Error: No se pudo expandir la memoria.\n");
        free(codigos); // Si falla, liberamos el original para no fugar memoria
        return 1;
    }

    // Actualizamos nuestro puntero principal con la nueva dirección (por si el sistema lo movió de lugar)
    codigos = temp;

    // Metemos los nuevos códigos en los espacios recién ganados
    *(codigos + 2) = 400;
    *(codigos + 3) = 502;

    // 3. Imprimimos los 4 para comprobar que los primeros sobrevivieron intactos
    printf("\n--- REPORTE AMPLIADO (4 elementos) ---\n");
    for (int i = 0; i < nueva_capacidad; i++) {
        printf("Indice: %d | Codigo: %d | Direccion: %p\n", i, *(codigos + i), (void*)(codigos + i));
    }

    // 4. Limpieza final
    free(codigos);
    codigos = NULL;

    return 0;
}

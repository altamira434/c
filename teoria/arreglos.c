#include <stdio.h>
// Seguimos usando el stack de la RAM

int main() {
    // Declaramos un arreglo de 4 enteros.
    // La computadora reserva 4 casillas pegadas una tras otra en el Stack.
    int temperaturas[4] = {30, 45, 60, 90};

    // 1. El nombre del arreglo es un puntero al primer elemento
    printf("Dirección base del arreglo (temperaturas): %p\n", (void*)temperaturas);
    printf("Dirección exacta del primer elemento (&temperaturas[0]): %p\n", (void*)&temperaturas[0]);

    printf("\n--- Recorriendo la memoria paso a paso ---\n");

    // 2. Aritmética de punteros: Podemos movernos por la memoria sumando al puntero
    for (int i = 0; i < 4; i++) {
        // (temperaturas + i) salta automáticamente al siguiente espacio en la RAM
        // Usamos '*' para leer el valor que hay en esa dirección
        printf("Índice [%d] -> Valor: %d | Dirección en RAM: %p\n",
               i,
               *(temperaturas + i),
               (void*)(temperaturas + i));
    }

    return 0;
}

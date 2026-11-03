#include <stdio.h>
#include <stdlib.h> // ¡Obligatorio para usar malloc y free!

int main() {
    int n = 5; // Supongamos que el usuario nos dice cuántos elementos quiere

    // 1. Pedimos memoria al Heap con malloc
    // Multiplicamos cuántos elementos queremos por el tamaño de cada int (usando sizeof)
    int *dinamico = (int *) malloc(n * sizeof(int));

    // Verificación de seguridad (por si la RAM está llena y malloc falla)
    if (dinamico == NULL) {
        printf("Error: No hay memoria RAM disponible.\n");
        return 1;
    }

    // 2. Usamos el espacio exactamente igual que un arreglo normal con punteros
    for (int i = 0; i < n; i++) {
        *(dinamico + i) = (i + 1) * 10; // Llenamos con valores
        printf("Elemento %d: %d (Direccion: %p)\n", i, *(dinamico + i), (void*)(dinamico + i));
    }

    // 3. ¡La regla de oro del Heap! Liberar la memoria
    free(dinamico);

    // Buena práctica: anular el puntero para no dejarlo apuntando a basura
    dinamico = NULL;

    return 0;
}

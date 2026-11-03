#include <stdio.h>

/*
 * Primer problema a resolver usando el cerebro con C.
 * Conflicto: Imagina que estás leyendo 5 lecturas
 * de temperatura de diferentes cilindros de un motor
 * guardadas en un arreglo: int temps[5] = {85, 92, 110, 78, 95};.
 *
 * Solución: Encuentra la temperatura más alta de todas.
 * Y si alguna temperatura supera los 100°C, imprime una advertencia indicando
 * en que posición exacta del arreglo (que cilindro) ocurrio un pico de calor
 */

int main() {

    int temps[5] = {85, 92, 110, 78, 95};
    int temp_max = *temps;

    for (int i = 0; i < 5; i++) {

        printf("Indice: [%d] | Valor: %d | Dirección: %p\n", i, *(temps + i), (void*)(temps + i));

        if (*(temps + i) > temp_max) {
            temp_max = *(temps + i);
        }

        if (*(temps + i) > 100) {
            printf("[¡ADVERTENCIA!] Cilindro en índice [%d] con temperatura crítica: %d°C\n", i, *(temps + i));
        }
    }

    printf("El mayor valor de temperatura es: %d", temp_max);


    return 0;
}

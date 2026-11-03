#include <stdio.h>

/*
 * Segundo problema a resolver usando el cerebro con C.
 * Conflicto: Ajusta la presión actual dependiendo de su valor usando punteros
 * y sus direcciones de memoria
 */

void ajustar_presion(int *presion_actual) {

    if (*presion_actual < 30) {
        *presion_actual = *presion_actual + 15;
    } else if(*presion_actual > 60) {
        *presion_actual = 60;
    }
}

int main() {

    int presion = 70;

    ajustar_presion(&presion);

    printf("La presion actual es de: %d", presion);
    return 0;
}

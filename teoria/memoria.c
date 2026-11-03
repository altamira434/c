#include <stdio.h>

// usando la parte "Stack" de la memoria RAM

// La función recibe un PUNTERO a un entero (*temp). 
// No recibe el número, recibe la dirección de memoria donde vive el número.
void calibrar_temperatura(int *temp) {
    // Usamos el asterisco (*) para meternos a la dirección y cambiar el valor original
    *temp = 90; 
    printf("-> [Dentro de la función] Temperatura ajustada en la dirección %p\n", (void*)temp);
}

int main() {
    int temperatura_actual = 120; // El motor está sobrecalentado

    printf("1. Temperatura antes de la función: %d\n", temperatura_actual);

    // Llamamos a la función pasándole la DIRECCIÓN (&) de la variable, no su valor
    calibrar_temperatura(&temperatura_actual);

    // ¡Mira esto! La función modificó la variable original desde adentro
    printf("2. Temperatura despues de la función (en el main): %d\n", temperatura_actual);

    return 0;
}

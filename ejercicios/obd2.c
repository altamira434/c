#include <stdio.h>
#include <stdbool.h>

/*
 * Tercer problema a resolver con el cerebro con C.
 * Conflicto: En un arreglo de tipo entero encuentra el codigo 502, si lo encuentras que lo indice
 * y si no que muestre que no hay codigos registadros en el sistema.
 */

int main() {

    int codigos[] = {101, 104, 400, 300};
    bool encontrado;

    for (int i = 0; i < sizeof(codigos) / sizeof(codigos[0]); i++) {
        if (*(codigos + i) == 502) {
            printf("Se encontro el codigo 502 en el indice: %d\n", i);
            encontrado = true;
            break;
        }
    }

   if (!encontrado) {
       printf("Sistema sin fallas registradas\n");
   }

    return 0;
}

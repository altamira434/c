#include <stdio.h>
#include <stdbool.h>


// TO-DO: Escribir el contexto del problema

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

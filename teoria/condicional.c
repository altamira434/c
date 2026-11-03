#include <stdio.h>

int main() {
    int temperatura_motor = 105; // Supongamos que el sensor nos lee 105 grados

    printf("Leyendo sensor... Temperatura actual: %d°C\n", temperatura_motor);

    // Evaluamos la condición lógica
    if (temperatura_motor > 100) {
        printf("[¡ALERTA!] El motor está sobrecalentado. Activando ventilador de emergencia.\n");
    } else if (temperatura_motor > 80) {
        printf("[AVISO] La temperatura es alta, pero dentro del rango operativo normal.\n");
    } else {
        printf("[ESTABLE] El motor está a una temperatura óptima.\n");
    }

    return 0;
}

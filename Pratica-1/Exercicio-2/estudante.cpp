#include <iostream>
#include "estudante.h"

float Estudante::calcular_rsg() {
    float total = 0.000000;

    for(int i = 0; i < 5; i++) {
        total += notas[i];
    }
    return total / 5;
}

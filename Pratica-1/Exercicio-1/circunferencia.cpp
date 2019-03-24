#include "circunferencia.h"

#include <iostream>
#include <math.h>

Circunferencia::Circunferencia(double xc_value, double yc_value, double raio_value) {
    xc = xc_value;
    yc = yc_value;
    raio = raio_value;
}

double Circunferencia::calcular_area() {
    return 3.14 * pow(raio, 2);
}

bool Circunferencia::possui_intersecao(Circunferencia circ) {
    double distancia = sqrt(pow((circ.xc - xc), 2) +  pow((circ.yc - yc), 2));
    return (distancia <= (circ.raio + raio));
}


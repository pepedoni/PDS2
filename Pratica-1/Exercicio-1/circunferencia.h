#ifndef PDS2_CIRC_H
#define PDS2_CIRC_H

struct Circunferencia {
    
    double xc;
    double yc;
    double raio;

    Circunferencia(double xc_value, double yc_value, double raio_value);
    
    double calcular_area();
    bool possui_intersecao(Circunferencia circ);
};

#endif
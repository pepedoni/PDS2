#ifndef PDS2_AQUECEDOR_H
#define PDS2_AQUECEDOR_H

// Nome dos metodos:
// aquecer()
// resfriar()
// get_temperatura()

#pragma once
#include <iostream>
#include <iomanip>

class Aquecedor {
    private:
    	double temperatura;
    	double temperatura_minima;
    	double temperatura_maxima;
    	double fator_incremento;
    public:
    	Aquecedor();
    	Aquecedor(double temp);
    	Aquecedor(double temp_inicial, double fator_inc);
    	void aquecer();
    	void resfriar();
    	double get_temperatura();
};

#endif
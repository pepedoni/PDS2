
#include "aquecedor.h"

Aquecedor::Aquecedor()
{
	temperatura = 20;
	fator_incremento = 5;
	temperatura_minima = 10;
	temperatura_maxima = 40;
}

Aquecedor::Aquecedor(double temp)
{
	temperatura = temp;
}

Aquecedor::Aquecedor(double temp_inicial, double fator_inc)
{
	temperatura = temp_inicial;
	fator_incremento = fator_inc;
}

void Aquecedor::aquecer() {
    if(temperatura + fator_incremento > temperatura_maxima){
        temperatura = temperatura_maxima;
    } else{
        temperatura = temperatura + fator_incremento;
    }
};

void Aquecedor::resfriar() {
    if(temperatura - fator_incremento < temperatura_minima){
        temperatura = temperatura_minima;
    } else{
        temperatura = temperatura - fator_incremento;
    }
};

double Aquecedor::get_temperatura() {
	return temperatura;
};

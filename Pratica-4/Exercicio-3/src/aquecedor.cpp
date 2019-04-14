
#include "aquecedor.h"

Aquecedor::Aquecedor()
{
	temperatura = 20;
}

void Aquecedor::aquecer() {
	temperatura = temperatura + 5;
};

void Aquecedor::resfriar() {
	temperatura = temperatura - 5;
};

double Aquecedor::get_temperatura() {
	return temperatura;
};

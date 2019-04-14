#pragma once
#include <iostream>
#include <iomanip>

class Aquecedor {
private: 
	double temperatura;
public: 
	Aquecedor(); 
	void aquecer();
	void resfriar();
	double get_temperatura();
};
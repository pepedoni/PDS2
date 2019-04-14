#include <iostream>
#include "data.h"

Data::Data(int dia, int mes, int ano) {
    _dia = dia;
    _mes = mes;
    _ano = ano;
}

int Data::get_dia() {
    return _dia;
}

int Data::get_mes() {
    return _mes;
}

int Data::get_ano() {
    return _ano;
}

std::string Data::get_data_curto() {
    return std::to_string(_dia) + "/" + std::to_string(_mes) + "/" + std::to_string(_ano);
}

std::string Data::get_data_longo() {
    return std::to_string(_dia) + " de " + _meses[_mes - 1] + " de " + std::to_string(_ano);
}

// std::string get_data_curto();
// std::string get_data_longo();
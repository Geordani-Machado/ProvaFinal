#include <iostream>
#include "../Veiculos/Veiculos.hpp"
using namespace std;
#ifndef AUTOMOVEIS_H
#define AUTOMOVEIS_H

class Automoveis : public Veiculos{

public:


void set_diametroRoda(int diametroRoda);
void set_Acelerar();
void set_capaciadade(int capacidade);
string get_nome();
int get_anoFabricacao();
int get_capacidade();

protected:
	int diametroRoda;
};
#endif
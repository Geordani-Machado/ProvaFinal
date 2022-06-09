#include <iostream>
#include "../Veiculo/Veiculo.hpp"
using namespace std;
#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H

class Automovel: public Veiculos{

public:

void set_diametroRoda(int diametroRoda);
void set_Acelerar();

void MostrarDetalhes();
void AbrirPortaMalas();

int get_diametroRoda();

protected:
	int diametroRoda;
};
#endif
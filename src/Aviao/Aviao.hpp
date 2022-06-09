#include <iostream>
#include "../Veiculo/Veiculo.hpp"
using namespace std;
#ifndef AVIAO_H
#define AVIAO_H

class Automovel: public Veiculo{

public:

void set_numTurbinas(int num);

void set_fabricante(strng fabricante);

void Acelerar(string Acelerar);

void MostrarDetalhes();

int get_numTurbinas();

protected:
	int diametroRoda;
};
#endif
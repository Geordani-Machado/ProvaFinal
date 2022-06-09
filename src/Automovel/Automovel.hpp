#include <iostream>
#include "../Veiculo/Veiculo.hpp"
using namespace std;
#ifndef AUTOMOVEL_H
#define AUTOMOVEL_H

class Automovel: public Veiculo{

public:

void set_diametroRoda(int diametroRoda);

void set_fabricante(string f);

void Acelerar(string Acelerar);

void MostrarDetalhes();
void AbrirPortaMalas();

int get_diametroRoda();

protected:
	int diametroRoda;
};
#endif
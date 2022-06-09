#include <iostream>
#include "../Veiculo/Veiculo.hpp"
using namespace std;
#ifndef AUTOMOVEIS_H
#define AUTOMOVEIS_H

class Automoveis : public Veiculos{

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
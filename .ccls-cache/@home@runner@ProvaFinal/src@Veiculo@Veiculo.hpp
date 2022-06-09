#include <iostream>
#include "../Fabricante/Fabricante.hpp"
using namespace std;
#ifndef VEICULO_H
#define VEICULO_H
class Veiculo{

public:
virtual void Acelerar(string c)=0;
virtual void MostrarDetalhes()=0;

void set_nome(string nome);
void set_anoFabricacao(int ano);
void set_capaciadade(int capacidade);

string get_nome();
int get_anoFabricacao();
int get_capacidade();

protected:
	string nome;
	Fabricante Fabricante; // deve usar com base os dados inceridos na classe Fabricante
	int anoFabricacao;
	int capacidade;

};
#endif
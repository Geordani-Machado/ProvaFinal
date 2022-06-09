#include <iostream>
#include "../Frabricante/Fabricante.hpp"
using namespace std;
#ifndef VEICULO_H
#define VEICULO_H
class Veiculo{

public:
//virtais
virtual string Acelerar() = 0;
virtual void MostrarDetalhes() = 0;

void set_nome(string nome);
void set_anoFabricacao(int ano);
void set_capaciadade(int capacidade);

string get_nome();
int get_anoFabricacao();
int get_capacidade();

protected:
	string nome;
	Frabricante Fabricante; // deve usar com base os dados inceridos na classe Fabricante
	int anoFabricacao;
	int capacidade;

};
#endif
#include "Fabricante.hpp"
using namespace std;

void Fabricante::set_nome(string nome){
	this->nome=nome;
}

void Fabricante::set_paisDeorigem(string paisDeOrigem){
	this->paisDeOrigem=paisDeOrigem;
}

string Fabricante::get_nome(){
	return  nome;
}

string Fabricante::get_paisDeOrigem(){
	return paisDeOrigem;
}
#include "Automovel.hpp"

 void Automovel::set_diametroRoda(int diametroRoda){
	 this->diametroRoda=diametroRoda;
 }

int Automovel::get_diametroRoda(){
	return diametroRoda;
}

void Automovel::Acelerar(string a){
	cout << a;
}

void Automovel::AbrirPortaMalas(){
	cout << "O porta malas do carro foi aberto" << endl;
}

void Automovel::MostrarDetalhes(){
	cout << "Carro: " << nome << endl;
	cout << "Fabricante: " << Fabricante.get_nome() << endl;
	cout << "Pais de Origem " << Fabricante.get_paisDeOrigem() << endl;
}


void Automovel::set_fabricante(string f){
	Fabricante.get_nome();
	Fabricante.get_paisDeOrigem();
}
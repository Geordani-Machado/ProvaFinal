#include "Veiculo.hpp"

void Veiculo::set_nome(string nome){
	this->nome=nome;
}

void Veiculo::set_anoFabricacao(int anoFabricacao){
	this->anoFabricacao=anoFabricacao;
}

void Veiculo::set_capaciadade(int capacidade){
	this->capacidade=capacidade;
}

string Veiculo::get_nome(){
	return  nome;
}

int Veiculo::get_anoFabricacao(){
	return anoFabricacao;
}

int Veiculo::get_capacidade(){
	return capacidade;
}

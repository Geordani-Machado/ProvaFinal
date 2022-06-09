#include <iostream>
#include "./Automovel/Automovel.hpp"
#include "./Fabricante/Fabricante.hpp"

using namespace std;
Automovel a1, a2;
Fabricante f1,f2;

int main() {

	//Automovel
	cout << "Carro 01" << endl;
	//set fabricantes
	f1.set_nome("Model 03");
	f1.set_paisDeorigem("USA");
	//get fabricantes
	f1.get_nome();
	f1.get_paisDeOrigem();
	a1.MostrarDetalhes();
	a1.AbrirPortaMalas();
	a1.Acelerar("o carro acelera a 250kmh");
	//diametro roda
	a1.set_diametroRoda(20);
	a1.get_diametroRoda();
	cout << " \n ----------------------------------- \n" << endl;
	
	f2.set_nome("Fusca Azul");
	f2.set_paisDeorigem("USA");
	cout << "Carro 02" << endl;
	a2.MostrarDetalhes();
	a2.AbrirPortaMalas();
	a2.Acelerar("o carro acelera a 30kmh");
	//diametro roda
	a2.set_diametroRoda(20);
	a2.get_diametroRoda();
	cout << " \n ----------------------------------- \n" << endl;
	
	//Avião

	
}
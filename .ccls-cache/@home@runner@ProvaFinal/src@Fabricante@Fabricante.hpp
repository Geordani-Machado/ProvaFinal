#include <iostream>

using namespace std;

#ifndef FABRICANTE_H
#define FABRICANTE_H

  class Fabricante{
		public:
		void set_nome(string nome);
		void set_paisDeorigem(string paisDeOrigem);

		string get_nome();
		string get_paisDeOrigem();

		private:
			string nome;
			string paisDeOrigem;
      
  };
#endif
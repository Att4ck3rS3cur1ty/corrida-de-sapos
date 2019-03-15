#include "sapo.h"

#ifndef JOGODOSAPO_H 
#define JOGODOSAPO_H

class JogoDoSapo{
	private:
		//Sapo* corredores[10];
	public:
		void AddJogador(Sapo* novo);
		void Run();
		void Resultado();
		JogoDoSapo();
};

#endif

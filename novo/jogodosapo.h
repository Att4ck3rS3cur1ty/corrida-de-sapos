#include "sapo.h"

#ifndef JOGODOSAPO_H 
#define JOGODOSAPO_H

class JogoDoSapo{
	private:
		Sapo* corredores[10];
		int total_corredores;
	public:
		void AddJogador(Sapo* novo);
		void Run(int i);
		void Resultado();
		static int dist_total;
		JogoDoSapo();
};

#endif

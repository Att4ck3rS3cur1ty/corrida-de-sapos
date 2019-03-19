#include "jogodosapo.h"
#include "sapo.h"
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

JogoDoSapo jsapo; // para poder acessar os membros não-estáticos

void AddJogador(Sapo* novo){
	novo = new Sapo(1);
	jsapo.corredores[jsapo.total_corredores] = novo;
	jsapo.total_corredores++;
}

void Run(){
	jsapo.dist_total = 15;
	while(novo[i]->getDistPercorrida < jsapo.dist_total){
		for(int i = 0; i < jsapo.total_corredores; i++){
			for(int j = 0; j < novo[i]->getDistPercorrida; j++){
				cout << ".";
			}
			cout << "Sapo " << novo[i];
			for(int k = 0; k < jsapo.dist_total; k++){
				cout << ".";
			}
			novo[i].pular();
			cout << "\n";
			if(novo[i] >= jsapo.dist_total){
				Result(i);
			}
		}
	}
}

void Result(int i){
	cout << "Vitória do Sapo " << i << "." << endl;
}


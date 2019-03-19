#include "jogodosapo.h"
#include "sapo.h"
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

void JogoDoSapo::AddJogador(Sapo* novo){
	novo = new Sapo(1);
	corredores[total_corredores] = novo;
	total_corredores++;
}

void JogoDoSapo::Run(){
	dist_total = 15;
	bool verify = false;
	while(!verify){
		for(int i = 0; i < total_corredores; i++){
			for(int j = 0; j < corredores[i]->getDistPercorrida(); j++){
				cout << ".";
			}
			cout << "Sapo " << corredores[i];
			for(int k = 0; k < dist_total; k++){
				cout << ".";
			}
			corredores[i]->pular();
			cout << "\n";
			if(corredores[i]->getDistPercorrida() >= dist_total){
				verify = true;
				Result(i);
			}
		}
	}
}

void JogoDoSapo::Result(int i){
	cout << "Vitória do Sapo " << i << "." << endl;
}

JogoDoSapo::JogoDoSapo():total_corredores(0){
}


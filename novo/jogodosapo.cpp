#include "jogodosapo.h"
#include "sapo.h"
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

void JogoDoSapo::AddJogador(Sapo* novo){
	corredores[total_corredores] = novo;
	total_corredores++;
}

int JogoDoSapo::dist_total;
int id_vencedor;

void JogoDoSapo::Run(){
	JogoDoSapo::dist_total = 50;
	bool verify = false;
	while(!verify){
		for(int i = 0; i < total_corredores; i++){
			corredores[i]->pular();
			for(int j = 0; j < corredores[i]->getDistPercorrida(); j++){
				cout << ".";
			}
			cout << "Sapo " << corredores[i]->getId();
			for(int k = 0; k < dist_total - corredores[i]->getDistPercorrida(); k++){
				cout << ".";
			}
			cout << "\n";			
			if(corredores[i]->getDistPercorrida() >= dist_total){
				verify = true;
				Result(corredores[i]->getId(), corredores[i]->getPulos(), corredores[i]->getDistPercorrida());
				break;
			}
		}
	}
}

void JogoDoSapo::Result(int id, int pulos, int dist_percorrida){
	cout << "\nVitória do Sapo " << id << "." << endl;
	cout << "Quantidade de pulo(s): " << pulos << endl;
	cout << "Distância percorrida: " << dist_percorrida << endl;
}

JogoDoSapo::JogoDoSapo():total_corredores(0){
}


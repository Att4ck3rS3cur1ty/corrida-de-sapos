#include "jogodosapo.h"
#include "sapo.h"
#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

void AddJogador(Sapo* novo){
	corredores[total_corredores] = novo;
	total_corredores++;
}

void Run(){
	dist_total = 15;
	while(novo[i].getDistPercorrida < dist_total){
		for(int i = 0; i < total_corredores; i++){
			for(int j = 0; j < novo[i].getDistPercorrida; j++){
				cout << ".";
			}
			cout << "Sapo " << novo[i];
			for(int k = 0; k < dist_total; k++){
				cout << ".";
			}
			novo[i].pular();
			cout << "\n";
			if(novo[i] >= dist_total){
				Result(i);
			}
		}
	}
}

void Result(int i){
	cout << "Vitória do Sapo " << i << "." << endl;
}


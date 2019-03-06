#include "sapos.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

// Início

const int dist_total = 530;
int primeira_vez = 1;

Sapos[]* s = new Sapos[3];
s[1] = new Sapos(1, 0, 0);
s[2] = new Sapos(2, 0, 0);
s[3] = new Sapos(3, 0, 0);

void Sapos::pular(int x){
	int pulo;
	srand(time(NULL));
	pulo = rand() % 5 + 1; // saltará entre 1u e 5u
	
	s[x].setDist_Percorrida(s.getDist_Percorrida() + pulo);
	s[x].setPulos(s.getPulos() + 1);
}

void vez(){
	int sapo_vez;
	srand(time(NULL)); 

	if(primeira_vez){
		sapo_vez = rand() % 2 + 0; 
		pular(sapo_vez);
	}

	else{
		switch (sapo_vez){
			case 0:
				sapo_vez = 1;
				pular(sapo_vez);
			case 1:
				sapo_vez = 2;
				pular(sapo_vez);
			case 2: 
				sapo_vez = 0;
				pular(sapo_vez);
		}
	}
}

int fim(){
	for(int x = 0; i <= 2; i++){
		if(s[x].getDist_Percorrida >= dist_total){
			cout << "O vencedor foi o Sapo " << s[x].getId();
			cout << "Quantidade de pulos: " << s[x].getPulos(); 
			cout << "Distância percorrida: " << s[x].getDist_Percorrida();

			return 1;
		}
	}
	return 0;
}

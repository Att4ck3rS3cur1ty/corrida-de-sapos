#include "sapos.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

// Início

const int dist_total = 10;
int primeira_vez = 1;
int sapo_vez = -1;
int pulo = 0;

Sapos s[] = {Sapos(0, 0, 0), Sapos(1, 0, 0), Sapos(2, 0, 0)};

void Sapos::pular(int x){
	srand(time(NULL));
	pulo = rand() % 5 + 1; // saltará entre 1u e 5u
//	cout << "Distância do novo pulo: " << pulo << endl;

	cout << "Sapo " << s[x].getId() << " salta. " << "Distância atual percorrida: " << s[x].getDist_Percorrida() << "\n" << endl;	
	s[x].setDist_Percorrida(s[x].getDist_Percorrida() + pulo);
	s[x].setPulos(s[x].getPulos() + 1);
}

void Sapos::vez(){
	srand(time(NULL)); 

	if(primeira_vez == 1){
		sapo_vez = rand() % 3; 
		cout << "Início do jogo. Sapo " << sapo_vez << " começa." << "\n" << endl;
		pular(sapo_vez);
		primeira_vez = 0;
	}

	else{
		switch (sapo_vez){
			case 0:
				sapo_vez = 1;
		//		cout << "Vez do sapo " << sapo_vez << endl;
				pular(sapo_vez);
			case 1:
				sapo_vez = 2;
		//		cout << "Vez do sapo " << sapo_vez << endl;
				pular(sapo_vez);
			case 2: 
				sapo_vez = 0;
		//		cout << "Vez do sapo " << sapo_vez << endl;
				pular(sapo_vez);
		}
	}
}

int Sapos::fim(){
	for(int x = 0; x <= 2; x++){
		if(s[x].getDist_Percorrida() >= dist_total){
			cout << "O vencedor foi o Sapo " << s[x].getId() << endl;
			cout << "Quantidade de pulos: " << s[x].getPulos() << endl; 
			cout << "Distância percorrida: " << s[x].getDist_Percorrida() << endl;

			return 1;
		}
	}
	return 0;
}

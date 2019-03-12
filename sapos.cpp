#include "sapos.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <random>

using namespace std;

// Início

const int dist_total = 10;
int primeira_vez = 1;
int sapo_vez = -1;
random_device rd;
default_random_engine gen(rd());
uniform_int_distribution<int> dis(1, 6);
int pulo = dis(gen);
int ultimo_pulo, aux_ultimo_pulo;
Sapos s[] = {Sapos(0, 0, 0), Sapos(1, 0, 0), Sapos(2, 0, 0)};

void Sapos::pular(int x){
	//pulo = rand() % 5 + 1; // saltará entre 1u e 5u
	
	pulo = round(dis(gen));
	aux_ultimo_pulo = s[x].getDist_Percorrida();	
	cout << "Sapo " << s[x].getId() << " salta. " << "Distância percorrida antes deste salto: " << s[x].getDist_Percorrida() << "\n" << endl;
	s[x].setDist_Percorrida(s[x].getDist_Percorrida() + pulo);
	s[x].setPulos(s[x].getPulos() + 1);
	ultimo_pulo = s[x].getDist_Percorrida() - aux_ultimo_pulo;
}

void Sapos::vez(){
	//srand(time(NULL)); 

	if(primeira_vez == 1){
		cout << " ____ ____ ____ ____ ____ ____ ____ _________ ____ ____ _________ ____ ____ ____ ____ ____ "<< endl;
		cout << "||C |||o |||r |||r |||i |||d |||a |||       |||d |||e |||       |||S |||a |||p |||o |||s || "<< endl;
		cout << "||__|||__|||__|||__|||__|||__|||__|||_______|||__|||__|||_______|||__|||__|||__|||__|||__|| "<< endl;
		cout << "|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/_______\\|/__\\|/__\\|/_______\\|/__\\|/__\\|/__\\|/__\\|/__\\| "<< endl;
		srand(time(NULL)); 
		sapo_vez = rand() % 3; 
		cout << "\nInício do jogo. Sapo " << sapo_vez << " começa." << "\n" << endl;
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
			cout << "Sapo " << s[x].getId() << " teve seu último salto de " << ultimo_pulo << " unidades e ganhou ao ir para a sua " << s[x].getDist_Percorrida() << " unidade\n" << endl;
			cout << "O vencedor foi o Sapo " << s[x].getId() << endl;
			cout << "Quantidade de pulos: " << s[x].getPulos() << endl; 
			cout << "Distância total percorrida: " << s[x].getDist_Percorrida() << endl;

			return 1;
		}
	}
	return 0;
}

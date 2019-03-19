#include "jogodosapo.h"
#include "sapo.h"
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
using namespace std;

void JogoDoSapo::AddJogador(Sapo* novo){
	corredores[total_corredores] = novo;
	total_corredores++;
}

int JogoDoSapo::dist_total;
int id_vencedor;

void JogoDoSapo::Run(){
	JogoDoSapo::dist_total = 85;
	bool verify = false;
	while(!verify){
		for(int i = 0; i < total_corredores; i++){
			corredores[i]->pular();
			for(int j = 0; j < corredores[i]->getDistPercorrida(); j++){
				usleep(20000);				
				cout << ".";
				usleep(20000);
			}
			if(corredores[i]->getId() == 1){
		 		cout << "(>*-*)>";
				PontoFrente(0, 2);
			}
			if(corredores[i]->getId() == 2){
				cout << "(>>*-*)>>";
				PontoFrente(1, 4);
			}					

			if(corredores[i]->getId() == 3){
				cout << "(>>>*-*)>>>";
				PontoFrente(2, 6);	
			}
			
			cout << "\n";			
			if(corredores[i]->getDistPercorrida() >= dist_total){
				verify = true;
				usleep(20000);
				Result(corredores[i]->getId(), corredores[i]->getPulos(), corredores[i]->getDistPercorrida());
				break;
			}
		}
	}
}

void JogoDoSapo::Result(int id, int pulos, int dist_percorrida){
	usleep(15000);
	cout << "\nVitória do Sapo " << id << ".\n" << endl;

	cout<<"	 o  o   o  o\n"
	      "  	 |\\/ \\^/ \\/|\n"
	      "  	 |,-------.|\n"
	      "       ,-.(|)   (|),-.\n"
	      "       \\_*._ ' '_.* _/\n"
	      "        /`-.`--' .-'\\\n"
	  "   ,--./    `---'    \\,--.\n"
	  "   \\   |(  )     (  )|   /\n"
	  "    \\  | ||       || |  /\n"
	  "     \\ | /|\\     /|\\ | /\n"
	  "     /  \\-._     _,-/  \\\n"
	  "    //| \\  `---'  // |\\\\\n"
	  "   /,-.,-.\\       /,-.,-.\\\n"
	 "  o   o   o      o   o    o\n" << endl;
	usleep(10000);
	cout << "Quantidade de pulo(s): " << pulos << endl;
	usleep(10000);
	cout << "Distância percorrida: " << dist_percorrida << "\n" << endl;
}

JogoDoSapo::JogoDoSapo():total_corredores(0){
}

void JogoDoSapo::PontoFrente(int i, int apagar){
	for(int j = 0; j <= dist_total - corredores[i]->getDistPercorrida() - apagar; j++){
		cout << ".";
	        usleep(20000);
	}
}

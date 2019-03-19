#include <iostream>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "sapo.h"
#include "jogodosapo.h"
using namespace std;

int main(){
	cout << "      						 _  _ \n"
		"     						(.)(.)\n"
		"				            ,-.(.____.),-.\n"
		"					   ( \\ /\\ '--' / /)\n"
		" 					    \\ \\ / ,. \\ / /\n"
		"  					     ) '| || |' (" << endl;
	cout << " ____ ____ ____ ____ ____ ____ ____ _________ ____ ____ _________ ____ ____ ____ ____ ____ "<< endl;
	cout << "||C |||o |||r |||r |||i |||d |||a |||       |||d |||e |||       |||S |||a |||p |||o |||s || "<< endl;
	cout << "||__|||__|||__|||__|||__|||__|||__|||_______|||__|||__|||_______|||__|||__|||__|||__|||__|| "<< endl;
	cout << "|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/__\\|/_______\\|/__\\|/__\\|/_______\\|/__\\|/__\\|/__\\|/__\\|/__\\| "<< endl;
	cout << "\n" << endl;
	usleep(200000);
	cout << "ROUND ONE...\n" << endl;
	usleep(2000000);
	cout << "-------------------------------------F I G H T!!!!!!!!-------------------------------------\n" << endl;
	
	
	JogoDoSapo game;
	game.AddJogador(new Sapo(1));
	game.AddJogador(new Sapo(2));
	game.AddJogador(new Sapo(3));
	game.Run();
}

#ifndef SAPO_H
#define SAPO_H
#include <random>
#define MAX_SALTO 10
using namespace std;

class Sapo{
	private:
		int id;
		int dist_percorrida;
		int pulos;
		
		random_device rd;
		default_random_engine gen;
		uniform_int_distribution<int> dis;
	public:
		int getId(); 
		int getDistPercorrida(); 
		int getPulos();
		void pular();		
		static int dist_total;
		Sapo(int i); 
};

#endif

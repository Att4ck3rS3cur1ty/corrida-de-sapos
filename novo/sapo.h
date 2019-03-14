#include <random>
extern const int dist_total;
// colocar o pulo disgen o método pulo

#define MAX_SALTO 10

class Sapo{
	private:
		int id;
		int dist_percorrida;
		int pulos;
		
		random_device rd;
		default_random_engine gen(rd());
		uniform_int_distribution<int> dis(1, MAX_SALTO);
	public:
		int getId(); 
		int getDistPercorrida(); 
		int getPulos();
		void pular();		
		Sapo(); 
};

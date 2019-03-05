#include "sapos.h"
#include <stdlib.h>
#include <time.h>

const int dist_total = 530;

int Sapos::pular(){
	int iSecret;
	srand(time(NULL));
	iSecret = rand() % 5 + 1; // saltará entre 1u e 5u
	
	Sapos s;
	s.setDist_Percorrida(s.getDist_Percorrida() + iSecret);
	s.setPulos(s.getPulos() + 1);
	return getDist_Percorrida();
}

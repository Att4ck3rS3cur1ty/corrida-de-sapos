#include "sapo.h"
#include "jogodosapo.h"
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <random>

using namespace std;

void Sapo::pular(){
	dist_percorrida += round(dis(gen));
	pulos++;
}

int Sapo::getId(){
	return id;
}

int Sapo::getDistPercorrida(){
	return dist_percorrida;
}

int Sapo::getPulos(){
	return pulos;
}

Sapo::Sapo(int i):id(i), dist_percorrida(0), pulos(0), rd(), gen(rd()), dis(1, MAX_SALTO){
}

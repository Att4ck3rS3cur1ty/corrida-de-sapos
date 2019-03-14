#include <iostream>
#include "sapo.h"
using namespace std;

int main(){
	Sapo s1(0);
	Sapo s2(1);
	s1.pular();
	s2.pular();
	
	cout << s1.getDistPercorrida() << endl;
	cout << s2.getDistPercorrida() << endl;
}

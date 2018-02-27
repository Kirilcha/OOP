#include "Klad.h"
#include <fstream>

using namespace std;
#ifndef Aforizm_h
#define Aforizm_h
class Aforizm : public Klad
{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
	
>>>>>>> 2-2-2

public:
	char aftor[100];
=======
	char aftor[100];

public:
>>>>>>> 2-2-3
=======

public:
	char aftor[100];
>>>>>>> 2-2-4
	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
	Aforizm() {};
};
#endif
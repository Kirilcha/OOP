#include "Klad.h"
#include <fstream>

using namespace std;
#ifndef Aforizm_h
#define Aforizm_h
class Aforizm : public Klad
{

public:
	char aftor[100];
	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
	Aforizm() {};
};
#endif
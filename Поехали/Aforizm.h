#include "Klad.h"
#include <fstream>

using namespace std;
#ifndef Aforizm_h
#define Aforizm_h
class Aforizm : public Klad
{
	char aftor[100];

public:
	void InData(ifstream &ifst);
	void Out(ofstream &ofst);

	void MultiMethod(Klad *other, ofstream &ofst);
	void MMAf(ofstream &ofst);
	void MMPos(ofstream &ofst);
	void MMZag(ofstream &ofst);

	Aforizm() {};
};
#endif
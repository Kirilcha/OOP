#include "Klad.h"
#include <fstream>

using namespace std;
#ifndef Zagadka_h
#define Zagadka_h
class Zagadka : public Klad
{
	char otvet[100];

public:
	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
	Zagadka() {};
};
#endif
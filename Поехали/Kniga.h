#include "Aforizm.h"

using namespace std;
#ifndef Kniga_h
#define Kniga_h
class Kniga : public Aforizm
{

public:
	void Out(ofstream &ofst);
	Kniga() {};
};
#endif


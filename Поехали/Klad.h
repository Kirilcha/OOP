#include <string>
#include <fstream>
using namespace std;
#ifndef Klad_h
#define Klad_h
class Klad
{
	std::string fraza;
public:
	static Klad* In(ifstream &ifst);
	void fr(ofstream &ofst);
	virtual void Out(ofstream &ofst) = 0;
	virtual void InData(ifstream &ifst) = 0;

	virtual void MultiMethod(Klad *other, ofstream &ofst) = 0;
	virtual void MMAf(ofstream &ofst) = 0;
	virtual void MMPos(ofstream &ofst) = 0;
	virtual void MMZag(ofstream &ofst) = 0;
};
#endif

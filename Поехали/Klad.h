#include <string>
#include <fstream>
using namespace std;
#ifndef Klad_h
#define Klad_h
class Klad
{
	int ocenka;
	std::string fraza;
public:
	static Klad* In(ifstream &ifst);
	string fr();
	int Znaki();
	virtual void Out(ofstream &ofst) = 0;
	virtual void InData(ifstream &ifst) = 0;
	bool prov(Klad &b);
};
#endif

#include "Klad.h"
#include "Aforizm.h"
#include "Posl_Pogov.h"
#include <string>
#include <fstream>
#include "Zagadka.h"

using namespace std;

Klad* Klad::In(ifstream &ifst)  
{
	Klad *klad;
	int key;
	ifst >> key;   

	switch (key) 
	{
	case 1:
		klad = new Aforizm;  
		break;
	case 2:
		klad = new Posl_Pog;
		break;
	case 3:
		klad = new Zagadka;
		break;
	default:   
		return 0;
	}
	ifst.get();
	getline(ifst, klad->fraza);
	klad->InData(ifst);
	return klad;
}
string Klad::fr()
{
	return fraza;
}
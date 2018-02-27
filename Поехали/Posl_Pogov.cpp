#include "Posl_Pogov.h"
#include <fstream>

using namespace std;

void Posl_Pog:: InData(ifstream &ifst)
{
	ifst.getline(strana, 100, '\n');
}

void Posl_Pog:: Out(ofstream &ofst)
{
<<<<<<< HEAD
	ofst << " Страна данной пословицы/поговорки: " << strana << endl;
}
=======
	ofst << " Страна данной пословицы/поговорки: " << strana << " (Количество знаков препинания : " << Znak_(strana) << ")" << endl;
}
>>>>>>> 2-2-2

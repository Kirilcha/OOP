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
	ofst << " ������ ������ ���������/���������: " << strana << endl;
}
=======
	ofst << " ������ ������ ���������/���������: " << strana << " (���������� ������ ���������� : " << Znak_(strana) << ")" << endl;
}
>>>>>>> 2-2-2

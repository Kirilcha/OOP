#include "Zagadka.h"
#include <fstream>
<<<<<<< HEAD

=======
>>>>>>> 2-2-2
using namespace std;

void Zagadka::InData(ifstream &ifst)
{
	ifst.getline(otvet, 100, '\n');
}

void Zagadka::Out(ofstream &ofst)
{
<<<<<<< HEAD
	ofst << " ����� �� �������: " << otvet << endl;
}
=======
	ofst << " ����� �� �������: " << otvet << " (���������� ������ ���������� : " << Znak_(otvet) << ")" << endl;
}

>>>>>>> 2-2-2

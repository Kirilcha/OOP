#include "Aforizm.h"
#include <fstream>
using namespace std;

void Aforizm:: InData(ifstream &ifst)   
{
	ifst.getline(aftor, 100, '\n');
<<<<<<< HEAD
=======
	Klad::InData(ifst);
>>>>>>> 2-2-3
}

void Aforizm:: Out(ofstream &ofst)
{
<<<<<<< HEAD
<<<<<<< HEAD
	ofst << " ����� ������� ������������: " << aftor << endl;
}
=======
	ofst << " ����� ������� ������������: " << aftor << " (���������� ������ ���������� : " << Znak_(aftor) << ")"<< endl;
}


>>>>>>> 2-2-2
=======
	ofst << " ����� ������� ������������: " << aftor << endl;
	Klad::Out(ofst);
}


>>>>>>> 2-2-3

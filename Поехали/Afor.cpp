#include "Aforizm.h"
#include <fstream>
using namespace std;

void Aforizm:: InData(ifstream &ifst)   
{
	ifst.getline(aftor, 100, '\n');
}

void Aforizm:: Out(ofstream &ofst)
{
<<<<<<< HEAD
	ofst << " ����� ������� ������������: " << aftor << endl;
}
=======
	ofst << " ����� ������� ������������: " << aftor << " (���������� ������ ���������� : " << Znak_(aftor) << ")"<< endl;
}


>>>>>>> 2-2-2

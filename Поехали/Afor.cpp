#include "Aforizm.h"
#include <fstream>
using namespace std;

void Aforizm:: InData(ifstream &ifst)   
{
	ifst.getline(aftor, 100, '\n');
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
	Klad::InData(ifst);
>>>>>>> 2-2-3
=======
>>>>>>> 2-2-4
=======
>>>>>>> 2-2-5
}

void Aforizm:: Out(ofstream &ofst)
{
<<<<<<< HEAD
<<<<<<< HEAD
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
=======
	ofst << " ����� ������� ������������: " << aftor << endl;
}


>>>>>>> 2-2-4
=======
	ofst << " ����� ������� ������������: " << aftor << endl;
}

void Aforizm::OutAfor(ofstream &ofst)
{
	fr(ofst);
	Out(ofst);
}
>>>>>>> 2-2-5

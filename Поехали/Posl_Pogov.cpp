#include "Posl_Pogov.h"
#include <fstream>

using namespace std;

void Posl_Pog:: InData(ifstream &ifst)
{
	ifst.getline(strana, 100, '\n');
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

void Posl_Pog:: Out(ofstream &ofst)
{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	ofst << " ������ ������ ���������/���������: " << strana << endl;
}
=======
	ofst << " ������ ������ ���������/���������: " << strana << " (���������� ������ ���������� : " << Znak_(strana) << ")" << endl;
}
>>>>>>> 2-2-2
=======
	ofst << " ������ ������ ���������/���������: " << strana << endl;
	Klad::Out(ofst);
}

>>>>>>> 2-2-3
=======
	ofst << " ������ ������ ���������/���������: " << strana << endl;
}

>>>>>>> 2-2-4
=======
	ofst << " ������ ������ ���������/���������: " << strana << endl;
}
>>>>>>> 2-2-5

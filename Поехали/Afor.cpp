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
	ofst << " Автор данного высказывания: " << aftor << endl;
}
=======
	ofst << " Автор данного высказывания: " << aftor << " (Количество знаков препинания : " << Znak_(aftor) << ")"<< endl;
}


>>>>>>> 2-2-2
=======
	ofst << " Автор данного высказывания: " << aftor << endl;
	Klad::Out(ofst);
}


>>>>>>> 2-2-3

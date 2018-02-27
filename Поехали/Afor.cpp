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
=======
	ofst << " Автор данного высказывания: " << aftor << endl;
}


>>>>>>> 2-2-4
=======
	ofst << " Автор данного высказывания: " << aftor << endl;
}

void Aforizm::OutAfor(ofstream &ofst)
{
	fr(ofst);
	Out(ofst);
}
>>>>>>> 2-2-5

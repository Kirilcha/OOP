#include "Zagadka.h"
#include <fstream>
<<<<<<< HEAD
<<<<<<< HEAD

=======
>>>>>>> 2-2-2
=======
>>>>>>> 2-2-4
using namespace std;

void Zagadka::InData(ifstream &ifst)
{
	ifst.getline(otvet, 100, '\n');
}

void Zagadka::Out(ofstream &ofst)
{
<<<<<<< HEAD
<<<<<<< HEAD
	ofst << " Ответ на загадку: " << otvet << endl;
}
=======
	ofst << " Ответ на загадку: " << otvet << " (Количество знаков препинания : " << Znak_(otvet) << ")" << endl;
}

>>>>>>> 2-2-2
=======
	ofst << " Ответ на загадку: " << otvet << endl;
}

>>>>>>> 2-2-4

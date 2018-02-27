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
	ofst << " Страна данной пословицы/поговорки: " << strana << endl;
}
=======
	ofst << " Страна данной пословицы/поговорки: " << strana << " (Количество знаков препинания : " << Znak_(strana) << ")" << endl;
}
>>>>>>> 2-2-2
=======
	ofst << " Страна данной пословицы/поговорки: " << strana << endl;
	Klad::Out(ofst);
}

>>>>>>> 2-2-3
=======
	ofst << " Страна данной пословицы/поговорки: " << strana << endl;
}

>>>>>>> 2-2-4
=======
	ofst << " Страна данной пословицы/поговорки: " << strana << endl;
}
>>>>>>> 2-2-5

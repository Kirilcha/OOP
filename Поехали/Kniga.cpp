#include "Kniga.h"
#include <fstream>
using namespace std;

void Kniga::Out(ofstream &ofst)
{
	ofst << " Книга: " << aftor << endl;
}

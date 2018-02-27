#include "Zagadka.h"
#include <fstream>

using namespace std;

void Zagadka::InData(ifstream &ifst)
{
	ifst.getline(otvet, 100, '\n');
}

void Zagadka::Out(ofstream &ofst)
{
	ofst << " Ответ на загадку: " << otvet << endl;
}
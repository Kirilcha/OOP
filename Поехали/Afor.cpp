#include "Aforizm.h"
#include <fstream>
using namespace std;

void Aforizm:: InData(ifstream &ifst)   
{
	ifst.getline(aftor, 100, '\n');
}

void Aforizm:: Out(ofstream &ofst)
{
	ofst << " ����� ������� ������������: " << aftor << endl;
}

void Aforizm::OutAfor(ofstream &ofst)
{
	fr(ofst);
	Out(ofst);
}
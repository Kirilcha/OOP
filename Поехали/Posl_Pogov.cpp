#include "Posl_Pogov.h"
#include <fstream>

using namespace std;

void Posl_Pog:: InData(ifstream &ifst)
{
	ifst.getline(strana, 100, '\n');
}

void Posl_Pog:: Out(ofstream &ofst)
{
	fr(ofst);
	ofst << " ������ ������ ���������/���������: " << strana << endl;
}

void Posl_Pog::MultiMethod(Klad *other, ofstream &ofst)
{
	other->MMPos(ofst);
}

void Posl_Pog::MMAf(ofstream &ofst)
{
	ofst << "������� � ���������:" << endl;
}

void Posl_Pog::MMPos(ofstream &ofst)
{
	ofst << "��������� � ���������:" << endl;
}
void Posl_Pog::MMZag(ofstream &ofst)
{
	ofst << "������� � ���������:" << endl;
}
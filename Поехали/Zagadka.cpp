#include "Zagadka.h"
#include <fstream>
using namespace std;

void Zagadka::InData(ifstream &ifst)
{
	ifst.getline(otvet, 100, '\n');
}

void Zagadka::Out(ofstream &ofst)
{
	fr(ofst);
	ofst << " ����� �� �������: " << otvet << endl;
}

void Zagadka::MultiMethod(Klad *other, ofstream &ofst)
{
	other->MMZag(ofst);
}

void Zagadka::MMAf(ofstream &ofst)
{
	ofst << "������� � �������:" << endl;
}

void Zagadka::MMPos(ofstream &ofst)
{
	ofst << "��������� � �������:" << endl;
}

void Zagadka::MMZag(ofstream &ofst)
{
	ofst << "������� � �������:" << endl;
}
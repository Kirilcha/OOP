#include "Aforizm.h"
#include <fstream>
using namespace std;

void Aforizm:: InData(ifstream &ifst)   
{
	ifst.getline(aftor, 100, '\n');
}

void Aforizm:: Out(ofstream &ofst)
{
	fr(ofst);
	ofst << " ����� ������� ������������: " << aftor << endl;
}

void Aforizm::MultiMethod(Klad *other, ofstream &ofst)
{
	other->MMAf(ofst);
}

void Aforizm::MMAf(ofstream &ofst)
{
	ofst << "������� � �������:" << endl;
}

void Aforizm::MMPos(ofstream &ofst)
{
	ofst << "��������� � �������:" << endl;
}

void Aforizm::MMZag(ofstream &ofst)
{
	ofst << "������� � �������:" << endl;
}
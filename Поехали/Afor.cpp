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
	ofst << " Автор данного высказывания: " << aftor << endl;
}

void Aforizm::MultiMethod(Klad *other, ofstream &ofst)
{
	other->MMAf(ofst);
}

void Aforizm::MMAf(ofstream &ofst)
{
	ofst << "Афоризм и Афоризм:" << endl;
}

void Aforizm::MMPos(ofstream &ofst)
{
	ofst << "Пословица и Афоризм:" << endl;
}

void Aforizm::MMZag(ofstream &ofst)
{
	ofst << "Загадка и Афоризм:" << endl;
}
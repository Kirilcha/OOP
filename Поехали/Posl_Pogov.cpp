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
	ofst << " Страна данной пословицы/поговорки: " << strana << endl;
}

void Posl_Pog::MultiMethod(Klad *other, ofstream &ofst)
{
	other->MMPos(ofst);
}

void Posl_Pog::MMAf(ofstream &ofst)
{
	ofst << "Афоризм и Пословица:" << endl;
}

void Posl_Pog::MMPos(ofstream &ofst)
{
	ofst << "Пословица и Пословица:" << endl;
}
void Posl_Pog::MMZag(ofstream &ofst)
{
	ofst << "Загадка и Пословица:" << endl;
}
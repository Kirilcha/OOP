#include "Klad.h"
#include "Aforizm.h"
#include "Posl_Pogov.h"
#include <string>
#include <fstream>

using namespace std;

Klad* Klad::In(ifstream &ifst)  
{
	Klad *klad;
	int key;
	ifst >> key;       

	switch (key) 
	{
	case 1:
		klad = new Aforizm; 
		break; 
	case 2:
		klad = new Posl_Pog;
		break;
	default:   
		return 0;
	}
	ifst.get();
	getline(ifst, klad->fraza);
	klad->InData(ifst);
	ifst.get(); 
	return klad;
}
string Klad::fr()
{
	return fraza;
}


void Klad::InData(ifstream &ifst) 
{
	ifst >> ocenka;
}

void Klad::Out(ofstream &ofst) 
{
	if (ocenka > 10 ||  ocenka < 0)
	{
		ofst << "������ �� ������������� 10 ������� �����!" << endl;
	}
	else
	{
		ofst << "������������ ������ ��������� �� �������������� ����� = " << ocenka << endl;
	}
}


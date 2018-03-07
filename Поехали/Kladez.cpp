#include "Klad.h"
#include "Aforizm.h"
#include "Posl_Pogov.h"
#include <string>
#include <iostream>
#include <conio.h>
#include <fstream>
#include "Zagadka.h"

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
	case 3:
		klad = new Zagadka;
		break;
	default:   
		cout << "������ ������ �������� ����� \n������ ��������� ��������� �����������" << endl;
		_getch();
		return 0;
	}
	ifst.get();
	getline(ifst, klad->fraza);
	klad->InData(ifst);
	return klad;
}
string Klad::fr()
{
	return fraza;
}

int Klad::Znaki()
{
	char a[] = ".,?!;:-'\"";
	int Kol = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < fraza.size(); j++)
		{
			if (a[i] == fraza[j])
			{
				if (fraza[j] == '.' && fraza[j + 1] == '.' && fraza[j - 1] == '.')
				{
					Kol -= 2;
				}
				Kol++;
			}
		}
	}
	return Kol;
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

bool Klad::prov(Klad &a)
{
	return this->Znaki() < a.Znaki();
}
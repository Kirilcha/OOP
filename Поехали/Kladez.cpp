#include "Klad.h"
#include "Aforizm.h"
#include "Posl_Pogov.h"
#include <string>
#include <fstream>
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 2-2-4
#include "Zagadka.h"

using namespace std;

<<<<<<< HEAD
<<<<<<< HEAD
Klad* Klad::In(ifstream &ifst)  
=======
Klad* Klad::In(ifstream &ifst)   // ��������� ����� ����� ���� �����������
>>>>>>> 2-2-2
{
	Klad *klad;
	int key;
	ifst >> key;        // ��������� ���� ������������ ��
=======

using namespace std;

Klad* Klad::In(ifstream &ifst)   // ��������� ����� ����� ���� �����������
{
	Klad *klad;
	int key;
	ifst >> key;       
>>>>>>> 2-2-3
=======
Klad* Klad::In(ifstream &ifst)   // ��������� ����� ����� ���� �����������
{
	Klad *klad;
	int key;
	ifst >> key;        /// ��������� ���� ������������ ��
>>>>>>> 2-2-4

	switch (key)  // � �����������, �� ����, ��� � �����, ���� � ������� ����� ������ 
	{
	case 1:
		klad = new Aforizm;  // ���������� � �������(��) ���������� ������
		break; // ���������� ���������� ��
	case 2:
		klad = new Posl_Pog;
		break;
<<<<<<< HEAD
<<<<<<< HEAD
	case 3:
		klad = new Zagadka;
		break;
=======
>>>>>>> 2-2-3
=======
	case 3:
		klad = new Zagadka;
		break;
>>>>>>> 2-2-4
	default:    // ��� ���������� -> ��� ������
		return 0;
	}
	ifst.get();
	getline(ifst, klad->fraza);
	klad->InData(ifst);
<<<<<<< HEAD
<<<<<<< HEAD
	return klad;
<<<<<<< HEAD
=======

>>>>>>> 2-2-2
=======
	ifst.get();
	return klad;
>>>>>>> 2-2-3
=======
	return klad;

>>>>>>> 2-2-4
}
string Klad::fr()
{
	return fraza;
}
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
=======
>>>>>>> 2-2-4

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
<<<<<<< HEAD
>>>>>>> 2-2-2
=======


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

>>>>>>> 2-2-3
=======

bool Klad::prov(Klad &a)
{
	return this->Znaki() < a.Znaki();
}
>>>>>>> 2-2-4

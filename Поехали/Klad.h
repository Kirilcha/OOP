#include <string>
#include <fstream>
using namespace std;
<<<<<<< HEAD
=======
#include <string>
#include <fstream>
using namespace std;
>>>>>>> 2-2-3
#ifndef Klad_h
#define Klad_h
class Klad
{
<<<<<<< HEAD
=======
	int ocenka;
>>>>>>> 2-2-3
	std::string fraza;
public:
	static Klad* In(ifstream &ifst);
	string fr();
<<<<<<< HEAD
<<<<<<< HEAD
	virtual void Out(ofstream &ofst) = 0;
	virtual void InData(ifstream &ifst) = 0;
=======
	int Znaki();
	virtual void Out(ofstream &ofst) = 0;
	virtual void InData(ifstream &ifst) = 0;

	int Znak_(char b[])
	{
		char a[] = ".,?!:-'\"";
		int Kol = 0;
		for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 100; j++)
			{
				if (a[i] == b[j])
				{
					if (b[j] == '.' && b[j + 1] == '.' && b[j - 1] == '.')
					{
						Kol -= 2;
					}
					Kol++;
				}
			}
		}
		return Kol;
	}

>>>>>>> 2-2-2
=======
	virtual void Out(ofstream &ofst) = 0;
	virtual void InData(ifstream &ifst) = 0;
>>>>>>> 2-2-3
};
#endif

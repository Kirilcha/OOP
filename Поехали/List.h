#ifndef List_h
#define List_h


#include "Klad.h"

class List
{
	Klad *a;
	List* next;

public:
	void Free();
	void In(ifstream &ifst);
	void Out(ofstream &ofst);
<<<<<<< HEAD
<<<<<<< HEAD
=======
	void Sort();
>>>>>>> 2-2-4
=======
>>>>>>> 2-2-5
	List();
	~List()
	{
		Free();
	}
};
#endif
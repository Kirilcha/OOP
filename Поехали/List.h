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
	void MultiMethod(ofstream &ofst);
	List();
	~List()
	{
		Free();
	}
};
#endif
#include "Klad.h"
#include "List.h"
#include <fstream>


void List::Free()       
{
	if (next!=NULL)
		delete next;
	delete a;
}


void List::In(ifstream &ifst)       
{
	int kol = 0;
	List *end = this;

	while (!ifst.eof())
	{
		if (kol == 0)
		{
			this->a = Klad::In(ifst);   
			this->next = NULL;
			kol++;
		}
		else
		{
			end->next = new List; 
			end = end->next;  
			end->a = Klad::In(ifst);
			end->next = NULL;
			kol++;
		}
	}
}

void List::Out(ofstream &ofst)        
{
	List *p = this;
	
	int i = 1;
	int  kol = 0;
	while (p!=NULL)
	{
		kol++;
		p = p->next;
	}
	List *p1 = this;
	ofst << "Контейнер заполнен! " << endl;
	ofst << "Количество фраз: " << kol << endl;
	while (p1!=NULL)
	{
		ofst << i << ": ";
		ofst << p1->a->fr() << " (Количество знаков препинания : " << p1->a->Znaki() << ")";
		p1->a->Out(ofst);
		p1=p1->next;
		i++;
	}
}

List::List()
{
	next = NULL;
	a = NULL;
}
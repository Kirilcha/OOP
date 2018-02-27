#include "Klad.h"
#include "List.h"
#include <fstream>


void List::Free()       
{
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 2-2-3
	if (this == 0)
		return;
	List *p = this;
	List *t;

<<<<<<< HEAD
	while (p)
	{
		t = p;
		p = p->next;
		delete t;         
	}	

}

=======
	if (next!=NULL)
		delete next;
	delete a;
}


>>>>>>> 2-2-2
=======
	p->next = NULL;
	p->a = NULL;
	p = NULL;
}


>>>>>>> 2-2-3
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
<<<<<<< HEAD
<<<<<<< HEAD
=======
	
>>>>>>> 2-2-2
=======
	
>>>>>>> 2-2-3
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
<<<<<<< HEAD
<<<<<<< HEAD
		ofst << p1->a->fr() << endl;
=======
		ofst << p1->a->fr() << " (Количество знаков препинания : " << p1->a->Znaki() << ")";
>>>>>>> 2-2-2
=======
		ofst << p1->a->fr() << endl; 
>>>>>>> 2-2-3
		p1->a->Out(ofst);
		p1=p1->next;
		i++;
	}
}

<<<<<<< HEAD
=======


>>>>>>> 2-2-3
List::List()
{
	next = NULL;
	a = NULL;
}
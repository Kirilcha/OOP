#include "Klad.h"
#include "List.h"
#include <fstream>
<<<<<<< HEAD
<<<<<<< HEAD
=======
#include <iostream>
>>>>>>> 2-2-4
=======
>>>>>>> 2-2-5


void List::Free()       
{
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======
>>>>>>> 2-2-3
=======
>>>>>>> 2-2-5
	if (this == 0)
		return;
	List *p = this;
	List *t;

<<<<<<< HEAD
<<<<<<< HEAD
	while (p)
	{
		t = p;
		p = p->next;
		delete t;         
	}	

}

=======
=======
>>>>>>> 2-2-4
	if (next!=NULL)
		delete next;
	delete a;
}


<<<<<<< HEAD
>>>>>>> 2-2-2
=======
=======
>>>>>>> 2-2-5
	p->next = NULL;
	p->a = NULL;
	p = NULL;
}

<<<<<<< HEAD

>>>>>>> 2-2-3
=======
>>>>>>> 2-2-4
=======
>>>>>>> 2-2-5
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
<<<<<<< HEAD
<<<<<<< HEAD
=======
	
>>>>>>> 2-2-2
=======
	
>>>>>>> 2-2-3
=======
	
>>>>>>> 2-2-4
=======
>>>>>>> 2-2-5
	int i = 1;
	int  kol = 0;
	while (p!=NULL)
	{
		kol++;
		p = p->next;
<<<<<<< HEAD
	}
	List *p1 = this;
	ofst << "Контейнер заполнен! " << endl;
	ofst << "Количество фраз: " << kol << endl;
	while (p1!=NULL)
	{
		ofst << i << ": ";
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
		ofst << p1->a->fr() << endl;
=======
		ofst << p1->a->fr() << " (Количество знаков препинания : " << p1->a->Znaki() << ")";
>>>>>>> 2-2-2
=======
		ofst << p1->a->fr() << endl; 
>>>>>>> 2-2-3
=======
		ofst << p1->a->fr() << " (Количество знаков препинания : " << p1->a->Znaki() << ")";
>>>>>>> 2-2-4
		p1->a->Out(ofst);
=======

	}
	List *p1 = this;
	ofst << "Контейнер заполнен! " << endl;
	ofst << "Афоризмы: " << endl;

	while (p1!=NULL)
	{
		ofst << i << ": ";
		p1->a->OutAfor(ofst);
>>>>>>> 2-2-5
		p1=p1->next;
		i++;
	}
}

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
=======


>>>>>>> 2-2-3
=======
void List::Sort()
{
	char p;
	bool proverka;
	cout << "\nКак отсортировать? По возрастанию (>) или убыванию (<): ";
	cin >> p;
	switch (p)
	{
	case '>':
	{
				proverka = 0;
				break;
	}

	case '<':
	{
				proverka = 1;
				break;
	}
	default:
	{
			   cout << "Ошибка!" << endl;
	}
	}

	Klad* t3;
	List* t1;
	List * t2;

	for (t1 = (this); t1; t1 = t1->next)
	{
		for (t2 = (this); t2; t2 = t2->next)
		{
			if ((t1->a->prov(*t2->a)) - proverka)
			{
				t3 = t1->a;
				t1->a = t2->a;
				t2->a = t3;
			}
		}
	}
}

>>>>>>> 2-2-4
=======
>>>>>>> 2-2-5
List::List()
{
	next = NULL;
	a = NULL;
}
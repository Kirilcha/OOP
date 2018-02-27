#include <iostream>
#include <conio.h>
#include <fstream>
#include <cstdio>
#include "List.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	ifstream in;
	in.open("1.txt");
	if (!in.is_open())
	{
		cout << "Îרטבךא ס פאיכמל";
		return -1;
	}

	ofstream out;
	out.open("2.txt");
	if (!out.is_open())
	{
		cout << "Îרטבךא ס פאיכמל";
		return -1;
	}

	cout << "Start" << endl;

	List* begin = new List;
	begin->In(in);
<<<<<<< HEAD
<<<<<<< HEAD
	begin->Out(out);
<<<<<<< HEAD
<<<<<<< HEAD
=======
	begin->Free();
	begin = NULL;
	begin->Out(out);
>>>>>>> 2-2-2
=======
>>>>>>> 2-2-3

	cout << "Stop" << endl;
=======
	begin->Sort();
	begin->Out(out);
	begin->Free();
	begin = NULL;
	begin->Out(out);

	cout << endl << "Stop" << endl;
>>>>>>> 2-2-4
=======
	begin->Out(out);

	cout << "Stop" << endl;
>>>>>>> 2-2-5

	in.close();
	out.close();

	_getch();
	return 0;
}
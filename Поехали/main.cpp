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

	begin->Sort();

	begin->Free();
	begin = NULL;
	begin->Out(out);

	cout << endl << "Stop" << endl;

	in.close();
	out.close();

	_getch();
	return 0;
}
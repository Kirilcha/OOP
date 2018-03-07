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
		cout << "Ошибка с входным файлом";
		return -1;
	}
	ofstream out;
	out.open("2.txt");
	if (!out.is_open())
	{
		cout << "Ошибка с выходным файлом";
		return -1;
	}

	cout << "Считывание данных" << endl;

	List* begin = new List;
	begin->In(in);
	begin->Sort();
	begin->Out(out);
	begin->Free();
	begin = NULL;

	cout << endl << "Запись данных" << endl;

	in.close();
	out.close();
	cout << "\nРабота программы завершена корректно" << endl;
	_getch();
	return 0;
}
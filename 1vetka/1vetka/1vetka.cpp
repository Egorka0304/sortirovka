﻿// 1vetka.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "");
	int *arr;
	int s;
	cout << "n = ";
	cin >> s;
	if (s <= 0)
	{
		cerr << "Недопустимое значение " << endl;
		return 1;
	}
	arr = new int[s];
	for (int i = 0; i < s; i++)
	{
		cout << "arr[" << i << "] = ";
		cin >> arr[i];
	}
	int t;
	for (int i = 0; i < s - 1; i++)
	{
		for (int j = 0; j < s - i - 1; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
			}
		}
	}
	for (int i = 0; i < s; i++)
	{ 
		cout << arr[i] << " ";
	}
	cout << endl;
	delete[] arr;
	return 0;
}



// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

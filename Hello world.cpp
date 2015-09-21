// Hello world.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int N, phact=1;
	cout << "Phactorial for N? OK" << endl << "Enter N puhlease: ";
	cin >> N;
	for (int i = 1; i <= N;i++)
		phact *= i;
	cout << "And the answer is: " << phact << endl;
	system("pause");
	return 0;
}

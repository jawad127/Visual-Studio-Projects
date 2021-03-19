// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

void c(int i);

int main()
{
	int i = 0;
	c(i);
	cout << i << endl;

	int x;
	cin >> x;
}
void c(int i) {
	i = 5;
}

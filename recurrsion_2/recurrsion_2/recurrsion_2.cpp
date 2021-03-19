// recurrsion_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
void fun(char a[],int count);
void fun(char a[],int count) {
	bool pass = false;

	int i=0, j=count-1;
	if (pass) {
		if (a[count / 2 - 1] = a[count / 2]) {
			cout << "its palindrome " << endl;
		}
	}
	else {
		if (a[i] = a[j]) {
			pass = true;
		}
	}
	i++;
	j--;
}
int main()
{
	int i = 0, count = 0;
	char a[10];
	cin.getline(a, 4);
	while (a[i] != '\0') {
		count++;
		i++;
	}
	fun(a,count);
}


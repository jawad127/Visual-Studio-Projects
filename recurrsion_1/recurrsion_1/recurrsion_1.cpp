


#include "pch.h"
#include <iostream>
using namespace std;

int fun(int a) {
	if (a == 1) {
		return a;
	}
	else {
		int fac = a * fun(a - 1);
		return fac;
	}
}
int main()
{
	int x;
	cin >> x;
	cout<<fun(x);
}



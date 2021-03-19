// dynamic array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

class dynamic {
public :
	int *p;

	void make_arr(int size) {
		p = new int[size];
		cout << p[0];
		
	}
	


};


int main() {
	int size;
	dynamic object;
	string option;
	while (option != "cancel") {
		cout << "\n\t type 'cancel' to return back : ";
		cout << "\n\n\t type 'create' to create array :";
		cin >> option;
		if (option == "create") {
			system("cls");
			cout << "\n\t Enter Size Of an Array :  ";
			cin >> size;
			object.make_arr(size);
		}
		
	}
	
}


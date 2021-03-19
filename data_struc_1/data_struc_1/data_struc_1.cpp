

#include "pch.h"
#include <iostream>
using namespace std;


struct stack {
	int top=-1 ;
	int st[10] = {};

};
void push(stack &s, int input);
int pop(stack &s);
bool isfull(stack &s);
bool isempty(stack &s);

int main()
{
	stack s;
	int store = 1110;
	int input = 10;
	int choice = 1000;
	
	
	while (choice != 0) {
		cout << "enter value  : ";
		cin>>input;
		system("cls");
		cout << "press 1 to push" << endl;
		cout << "press 2 to pop" << endl;
		cout << "press 3 to display" << endl;
		cout << "press 0 to quit" << endl;
		cin >> choice;
				

		switch (choice) {
		case 1:
			if (!isfull(s)) {
				push(s, input);
			}
			else {
				cout << "stack is full*" << endl;
			}
			break;
		case 2:
			if (!isempty(s)) {
				store = pop(s);
			}
			else {
				cout << "stack is empty*" << endl;
			}
			break;
		case 3:
			cout << store << endl;
			break;


		}
	}

	int x;
	cin >> x;
	
}

bool isfull(stack &s) {
	if (s.top == 10-1) {
		return true;
	}
	else {
		return false;
	}
}
bool isempty(stack &s) {
	if (s.top == -1) {
		return 1;
	}
	else {
		return 0;
	}
}
void push(stack &s, int input) {
	
	s.st[++s.top] =input;
	cout << "pushed successfully";

}
int pop(stack &s) {
	return s.st[s.top--];
	cout << "poped successfully";
}

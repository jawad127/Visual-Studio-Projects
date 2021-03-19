

#include "pch.h"
#include <iostream>
using namespace std;

struct stack {
	int top = -1;
	int arr[5];
	
};

void push(int element , stack &s ) {
	s.arr[++s.top] = element;
	
}
void shift(stack &stack1, stack &stack2 ) {
	int i = 0;
	while (i <= stack1.top) {
		stack2.arr[++stack2.top] = stack1.arr[i];
		i++;
	}
}

void display(stack &s) {
	int i = 0;
	while (i <= s.top) {
		cout << s.arr[i] << endl;
		i++;
	}
}

int main()
{
	int count = 0;
	stack stack1,stack2;
	push(5, stack1);
	push(7, stack1);
	push(2, stack1);
	push(6, stack1);
	display(stack1);
	cout << "stack 2 : ";
	shift(stack1, stack2);
	display(stack2);

}


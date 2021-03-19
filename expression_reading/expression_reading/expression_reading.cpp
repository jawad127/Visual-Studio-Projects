

#include "pch.h"
#include <iostream>
using namespace std;

struct stack {
	int top = -1;
	int arr[30];
};
bool precedence(char incoming, char stacktop);
bool isempty(stack &s);
int pop(stack &s);
void push(char element, stack &s);

int main()
{
	stack optr, list;
	int prev;
	char element[] = "a+((b+c)+(d+e)*f)/g";
	int size = strlen(element);

	//adding first opening and closing brackets to the equation

	for (int x = 0; x < size+1; x++) {
		if (x == 0) {
			int temp = element[x];
			element[x] = '(';
			prev = element[x + 2];
			element[x + 1] = temp;
		}
		else if(x==size-1) {
			element[x+1] = ')';
			break;
		}
		else {
			int temp=element[x+1];
			element[x+1] = prev;
			prev = element[x + 2];
			element[x + 2] = temp;
			
			}
	}
	
	
	int i = 0;
	while (i < strlen(element)) {

		if (element[i] == '(') {
			push(element[i], optr);
		}
		else if (element[i] == '+' || element[i] == '*' || element[i] == '/') {
			while (!isempty(optr) && !precedence(element[i], optr.top)) {
				push( pop(optr),list);
			}
			push(element[i], optr);
		}
		else if (element[i] == ')') {
			char ch = pop(optr);
			while (ch != '(') {
				
				push(ch, list);
				ch = pop(optr);

			}
		}
		else {
			push(element[i], list);
		}
		i++;
	}
	for (int j = 0; j < strlen(element); j++) {
		cout << list.arr[i];
	}

}

void push(char element , stack &s ) {
	s.arr[++s.top] = element;
}
int pop(stack &s) {

	return s.arr[s.top--];
}
bool isempty(stack &s) {
	if (s.top == -1) {
		return 0;
	}
	else {
		return 1;
	}
}

bool precedence(char incoming, char stacktop) {
	if (stacktop == '(') {
		return 0;
	}
	else if ((incoming == '*' || incoming == '/') && (stacktop == '+' || stacktop == '-')) {
		return 0;
	}
	else {
		return 1;
	}
}


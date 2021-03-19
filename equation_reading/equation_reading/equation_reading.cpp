

#include "pch.h"
#include <iostream>
using namespace std;

struct stack {
	int top=-1,i=0;
	char arr[20];
};

int precedence(char incoming, char top) {
	if (top == '(' || top=='$') {
		return 0;
	}
	if ((incoming == '*' || incoming == '/') && (top == '-' || top == '+')) {
		return 0;
	}
	else {
		return 1;
	}
}
void push(char incoming, stack &st) {
	st.arr[++st.top] = incoming;
}
int pop( stack &st) {
	return st.arr[st.top--];
}
bool isempty(stack &stack) {
	if (stack.top == -1) {
		return true;
	}
	else {
		return false;
	}
}

int main()
{
	stack op, list;
	char exp[] = "((a+b)/(c-d*e*(f+g$h$i)))",incoming;
	int i = 0;
	while (i < strlen(exp)) {
		incoming = exp[i];
		if (incoming == '(' || incoming=='$') {
			push(incoming, op);
		}


		else if (incoming == '+' || incoming == '-' || incoming == '/' || incoming == '*') {
			while (!isempty(op) && precedence(incoming, op.arr[op.top])) {
				push(pop(op), list);
			}
			push(incoming, op);
		}
		else if (incoming==')') {
			char ch = pop(op);
			while (ch != '(') {
				push(ch, list);
				ch = pop(op);
			}
		}
		else {
			push(incoming, list);
		}
		i++;
	}

	
	while (list.i<20) {
		cout << list.arr[list.i++];
		
	}
}

    



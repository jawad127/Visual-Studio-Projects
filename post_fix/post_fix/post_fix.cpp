

#include "pch.h"
#include <iostream>
using namespace std;
	
struct stack {
	int top=-1;
	int arr[25];
}op,list;
int main()
{	
	char symbol;
	char exp[] = "(a+((b+c)+(d+e)*f)/g)";
		for (int i = 0; i < strlen(exp); i++) {
			symbol = exp[i];
			if (symbol == '(') {
				push(op, symbol);
			}
			else if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/') {
				while (precedence(symbol, op.top)) {
					push(list, pop(op));
				}

			}
	}
    
}


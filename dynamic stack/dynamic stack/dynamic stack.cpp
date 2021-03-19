

#include "pch.h"
#include <iostream>
using namespace std;

struct stack {
	int data;
	stack *link;

};

void push(int element,stack *&top) {
	stack *new_node = new stack;
	new_node->data = element;
	if (top == NULL) {
		top = new_node;
	}
	else {
		new_node->link = top;
		top = new_node;
	}
}
int pop(stack *&top) {
	
	stack *return_node=top;
	top = top->link;
	
	return return_node->data;
}
void display(stack *&top) {
	 stack *nodeptr = top;
	 while (nodeptr->link != NULL) {
		 cout << nodeptr->data << endl;
		 nodeptr = nodeptr->link;
	}
}

int main()
{
	stack *top;
	
	push(5,top);
	push(5,top);
	push(5,top);
	push(5,top);
	display(top);
	/*cout << endl;
	cout << pop(top) << endl;
	cout << pop(top) << endl;
	cout << pop(top) << endl;*/
}


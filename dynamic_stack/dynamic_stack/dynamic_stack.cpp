

#include "pch.h"
#include <iostream>
using namespace std;

struct node {
	int data;
	node *next_add=NULL;
	
};
class dynamic_stack {
private:
	node *top;
public:
	dynamic_stack() {
		top = NULL;
	}
	void push(int element) {
		node *new_node = new node;
		new_node->data = element;
		if (top == NULL) {
			
			top = new_node;
		}
		else {
			node *nodeptr = top;
			while (nodeptr->next_add != NULL) {
				nodeptr = nodeptr->next_add;
			}
			nodeptr->next_add = new_node;
			new_node->next_add = NULL;
		}
	}

	int pop() {
		int element;
		if (top == NULL) {
			cout << "empty" << endl;
			return 0;
		}
		else {
			node *nodeptr, *prev;
			nodeptr = prev = top;
			while (nodeptr->next_add != NULL) {
				prev = nodeptr;
				nodeptr = nodeptr->next_add;
			}
			prev->next_add = NULL;
			element = nodeptr->data;
			delete nodeptr;
			return element;
		}
		
	}
};

int main()
{
	dynamic_stack d1;
	d1.push(5);
	d1.push(6);
	cout << d1.pop() << endl;
}
 

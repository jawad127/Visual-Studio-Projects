

#include "pch.h"
#include <iostream>
using namespace std;

class linkedlist {
private:
	struct node {
		int data;
		node *add = NULL;

	};
	node *head;
public:
	linkedlist() {
		head = NULL;
	}
	void insert(int element) {
		node *new_node = new node;
		new_node->data = element;
		if (head == NULL) {
			head = new_node;
		}
		else {
			node *nodeptr = head;
			while (nodeptr->add != NULL) {
				nodeptr = nodeptr->add;
			}
			nodeptr->add = new_node;
		}
	}

	void duplicate_remover() {
		node *outerloop = head;
		
		while (outerloop != NULL) {
			node *innerloop = head;
			node *prev = head;
			while (innerloop != NULL) {
				
					if ((innerloop != outerloop)&&(innerloop->data == outerloop->data))
					{
						node *temp = innerloop;
						prev->add = innerloop->add;
						delete temp;
						innerloop = prev->add;
					}
					else {
						prev = innerloop;
						innerloop = innerloop->add;
					}
			}
			outerloop = outerloop->add;
		}
	}
	void display() {
		node *nodeptr = head;
		while (nodeptr != NULL) {
			cout << nodeptr->data << " ";
			nodeptr = nodeptr->add;
		}
		cout << endl;
	}
};
int main()
{
	linkedlist l;
	l.insert(4);
	l.insert(4);
	l.insert(4);
	l.insert(4);
	l.insert(2);
	l.display();
	l.duplicate_remover();
	l.display();


    
}


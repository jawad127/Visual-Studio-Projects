

#include "pch.h"
#include <iostream>
using namespace std;
class doubly_linkedlist {
private:
	struct node {
		int data;
		node *add=NULL;
		node *prev=NULL;
	};
	node *head = NULL;
public:
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
			new_node->prev = nodeptr;
		}
	}

	void display() {
		node *nodeptr = head;
		while (nodeptr != NULL) {
			cout<<nodeptr->data;
			nodeptr = nodeptr->add;
		}

	}
	void reverse() {
		node *nodeptr = head;
		while (nodeptr->add != NULL) {
			nodeptr = nodeptr->add;
		}

		while (nodeptr!= NULL) {
			cout << nodeptr->data;
			nodeptr = nodeptr->prev;
		}
	}
};

int main()
{
	doubly_linkedlist d;
	d.insert(1);
	d.insert(2);
	d.insert(3);
	d.insert(4);
	d.insert(5);
	d.insert(6);
	cout << "no : " ; d.display();
	cout << endl;
	cout << "after reverse : ";
	d.reverse();

}




#include "pch.h"
#include <iostream>
using namespace std;

class linkedlist {
private :
	struct node {
		int data;
		node *address= NULL;
	};
	node *head;
public :
	linkedlist() {
		head = NULL;

	}
	void insert(int element){
		node *new_node = new node;
		new_node->data = element;
		if (head == NULL) {
			head = new_node;
		}
		else {
			node *nodeptr = head;
			while (nodeptr->address != NULL) {
				nodeptr = nodeptr->address;
			}
			nodeptr->address = new_node;
		}
	}
	void sorting() {
		
		node *outerloop = head;
		while (outerloop != NULL) {
			node *nodeptr1 = head;
			node *nodeptr2 = head->address;
			while (nodeptr1->address != NULL) {
				if (nodeptr1->data > nodeptr2->data) {
					int temp = nodeptr1->data;
					nodeptr1->data = nodeptr2->data;
					nodeptr2->data = temp;

				}
				nodeptr1 = nodeptr2;
				nodeptr2 = nodeptr2->address;
			}

			outerloop = outerloop->address;
		}
	}

	void display() {
		node *nodeptr = head;
		while (nodeptr != NULL) {
			cout << nodeptr->data << " ";
			nodeptr = nodeptr->address;
		}
	}
};

int main()
{
	linkedlist l;
	l.insert(9);
	l.insert(7);
	l.insert(6);
	l.insert(8);
	l.insert(1);
	l.insert(2);
	l.display();
	l.sorting();
	l.display();


	
}




#include "pch.h"
#include <iostream>
using namespace std;
class linkedlist {
	struct node {
		int data;
		node *address = NULL;
	};
	node *head;

public:
	linkedlist() {
		head = NULL;
	}
	void insert(int element ,int &count) {
		count++;
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

	void delete_middle(int count) {
		int mid = count / 2,i=0;
		node *prev = head;
		node *nodeptr = head->address;
		while (nodeptr != NULL) {
			if (i == mid) {
				prev->address = nodeptr->address;
				delete nodeptr; 
				return;
			}
			prev = nodeptr;
			nodeptr = nodeptr->address;
			i++;
		}
	}
	void display() {
		node *nodeptr = head;
		while (nodeptr != NULL) {

			cout << nodeptr->data;
			nodeptr = nodeptr->address;
		}
	}
};
int main()
{
	int count = -1;
	linkedlist l;
	l.insert(5, count);
	l.insert(6, count);
	l.insert(7, count);
	l.insert(8, count);
	l.insert(9, count);
	l.delete_middle(count);
	l.display();
     
}


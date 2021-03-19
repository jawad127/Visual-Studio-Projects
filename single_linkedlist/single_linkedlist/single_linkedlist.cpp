

#include "pch.h"
#include <iostream>
using namespace std;

class linkedlist {
private:
	struct node {
		int data;
		node *next_address;
	};
	node *head;

public:

	linkedlist() {
		head = NULL;
	}
	void insertnode(int element);
	void deletenode(int element);
	bool isnull();
	void displaynode();
};
bool linkedlist::isnull() {
	if (head == NULL) {
		return 0;
	}
	else {
		return 1;
	}
}
void linkedlist::insertnode(int element) {
	node *newnode = new node;
	newnode->data = element;
	if (head == NULL) {
		head = newnode;
	}
	else {
		node *nodeptr=head;
		while (nodeptr->next_address != NULL) {
			nodeptr = nodeptr->next_address;
		}
		nodeptr->next_address = newnode;
	}
}

void linkedlist::displaynode() {
	if (!isnull()) {
		node *nodeptr = head;
		while (nodeptr != NULL) {
			cout << nodeptr->data;
			nodeptr = nodeptr->next_address;
		}
	}
	else {
		cout << "empty" << endl;
	}
}
void linkedlist::deletenode(int element) {
	if (!isnull()) {
		if (head->data == element) {
			node *nodeptr = head;
			head = head->next_address;
			delete nodeptr;
		}
		else {
			node *prev = head;
			node *nodeptr = head->next_address;
			while (nodeptr != NULL) {
				if (nodeptr->data == element) {
					prev->next_address = nodeptr->next_address;
					delete nodeptr;
					break;
				}
				prev = nodeptr;
				nodeptr = nodeptr->next_address;
			}
		}
	}
	else {
		cout << "empty" << endl;
	}
}
int main()
{
	linkedlist l1;
	l1.insertnode(4);
	l1.deletenode(4);
	l1.displaynode();
}


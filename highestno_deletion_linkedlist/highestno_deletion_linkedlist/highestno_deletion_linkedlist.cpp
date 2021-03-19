

#include "pch.h"
#include <iostream>
using namespace std;

class linkedlist {
private:
	struct node{
		int data;
		node *add=NULL;

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

	void deletion_h() {
		int highest_no=0;
		node *nodeptr = head;
		while (nodeptr != NULL) {
			if (nodeptr->data > highest_no) {
				highest_no = nodeptr->data;
			}
			nodeptr = nodeptr->add;
		}
		node *prev = head;
		nodeptr = head;

		while (nodeptr != NULL) {

			if (nodeptr->data == highest_no) {
				node *temp = nodeptr;
				prev->add = temp->add;
				delete temp;
				return;
			}
			prev = nodeptr;
			nodeptr = nodeptr->add;
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
	l.insert(5);
	l.insert(11);
	l.insert(9);
	l.insert(1);
	l.display();
	l.deletion_h();
	l.display();
     
}


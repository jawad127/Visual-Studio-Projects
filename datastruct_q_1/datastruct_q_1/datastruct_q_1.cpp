//to move the last node of linked list to first

#include "pch.h"
#include <iostream>
using namespace std;

struct node {
	int data;
	node *next=NULL;
	};
class linked_list {
private:
	node *head;

public:
	linked_list() {
		head = NULL;
	}
	void insert(int v) {
		node *ptr = new node;
		ptr->data = v;
		if (head == NULL) {
			head = ptr;
		}
		else {
			node *temp = head;
			while (temp->next != NULL) {
				temp = temp->next;
			}
			temp->next = ptr;
			ptr->next = NULL;
		}
	 }
	void display(){
		node *temp = head;
		while (temp->next != NULL) {
			cout << temp->data;
			temp = temp->next;
		}
		cout << temp->data;
	}

	void movetofront() {
		node *last=head, *sec_last=NULL;
		while (last->next != NULL) {
			sec_last = last;
			last = last->next;
			
		}
		sec_last->next = NULL;
		last->next = head;
		head = last;
	}
};
int main()
{
	linked_list l;
	l.insert(1);
	l.insert(2);
	l.insert(3);
	l.insert(4);
	l.insert(5);
	l.display();
	l.movetofront();
	cout << endl;
	l.display();

}




#include "pch.h"
#include <iostream>
using namespace std;

class node {
public:
	int data;
	node *next, *prev;
	node(){
		data = NULL;
		next = prev = NULL;
	}
};

class db_list {
private:
	node *start;
	
public:
	db_list() {
		start = NULL;
	}
	void insert(int value) {
		node *ptr = new node;
		ptr->data = value;
		if (start == NULL) {
			start = ptr;
		}
		else {
			node *temp = start;
			
			while (temp->next != NULL) {
				
				temp = temp->next;
			}
			temp->next = ptr;
			ptr->prev = temp;
			
		}
	}

	void display() {
		node *i = start;
		while (i->next != NULL) {
			cout << i->data;
			i = i->next;
		}
		cout << i->data << endl;
	}

	void reverse() {
		node *temp1, *temp2;
		temp1 = start;
		temp2 = start->next;
		temp1->next = NULL;
		temp1->prev = temp2;
		while (temp2 != NULL) {
			temp2->prev = temp2->next;
			temp2->next = temp1;
			temp1 = temp2;
			temp2 = temp2->prev;
		}
		start = temp1;

	}

	void del_specific(int value) {
		node *curr= start;
		node *prev=NULL;
		while (curr != NULL) {
			if (start->data ==  value) {
				node *temp = start;
				start = start->next;
				delete temp;
				break;
			}
			else if (curr->data == value) {
				node *temp = curr->next;
				prev->next = curr->next;
				temp->prev = prev;
				delete curr;
				break;
			}
			prev = curr;
			curr = curr->next;
		}
	}
};

int main()
{
	db_list d;
	d.insert(5);
	d.insert(4);
	d.insert(3);
	d.insert(2);
	d.insert(1);
	d.display();
	d.reverse();
	d.display();
	d.del_specific(4);
	d.display();

}


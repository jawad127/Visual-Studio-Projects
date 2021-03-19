

#include "pch.h"
#include <iostream>
#include<string>
using namespace std;

struct node {
	int age;
	string name;
	node *add = NULL;

};
class dynamic_stack {
private:
	

	node *head = NULL;
public:
	void insert(int age, string name) {
		node *new_node = new node;
		new_node->name = name;
		new_node->age = age;
		
			new_node->add = head;
			head = new_node;
		
	}

	void display() {
		node *nodeptr = head;
		while (nodeptr != NULL) {
			cout << nodeptr->age;
			cout << nodeptr->name;
			nodeptr = nodeptr->add;
		}
	}

	void pop() {
		cout << head->age;
		cout << head->name;

		head = head->add;
		
	}
};

int main()
{
	dynamic_stack d;
	d.insert(20, "jawad");
	d.insert(21, "atif");
	d.insert(21, "rehan");
	d.display();

}


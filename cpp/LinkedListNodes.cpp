#include <iostream>
using namespace std;

// EXAMPLE ONE
/* struct Node {
	int data;
	Node *next;
	Node(int d) {
		this->data = d;
		next = NULL;
	}
}; */
class Node {
	public:
	int data;
	Node *next;
	Node(int d) {
		this->data = d;
		next = NULL;
	}
};
void display(Node *head) {
	while(head != NULL) {
		cout << head->data << endl;
		head = head->next;
	}
}
int length(Node *head) {
	int count = 0;
	while(head) {
		count++;
		haed = head->next;
	}
	return count;
}

int main() {
	Node *f1 = new Node(5);
	Node *f2 = new Node(10);
	Node *f3 = new Node(15);
	
	Node *h = f1;
	f1->next = f2;
	f2->next = f3;
	display(h);
}


// EXAMPLE ONE
/*
int main() {
	Node *m1 = new Node();
	Node *m2 = new Node();
	Node *m3 = new Node();
	
	
	m1->data = 5;
	m1->next = m2;
	m2->data = 10;
	m2->next = m3;
	m3->data = 15;
	m3->next = NULL;
	
	cout << m1->data << " " << m2->data << " " << m3->data << endl;
	cout << m1->next << " " << m2->next << " " << m3->next << endl;
	Node *head = m1;
	display(head);
	
	return 0;
} */

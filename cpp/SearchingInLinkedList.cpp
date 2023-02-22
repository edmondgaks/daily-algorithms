#include <iostream>
using namespace std;
struct Node {
	int data;
	Node *next;
	Node(int data) {
		this-> data = data;
		next = NULL;
	}
};
bool search(Node *head, int x) {
	Node *current = head;
	while(current != NULL) {
		if(current -> data == x) {
			return true;
			current = current -> next;
		}
	}
	return false;
}
Node *deleteFirstNode(Node *head) {
	if(head == NULL) {
		return NULL;
	}
	Node *temp = head;
	head = temp->next;
	delete temp;
	return head;
}
int main() {
	Node *n1 = new Node(5);
	Node *n2 = new Node(7);
	Node *n3 = new Node(9);
	Node *n4 = new Node(13);
	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;
	Node *head = NULL;
	
	head = deleteFirstNode(head);
	display(head);
	
	if(search(head,7)) {
		cout << "It is found";
	} else {
		cout << "It is not found";
	}
}

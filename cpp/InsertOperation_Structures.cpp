#include <iostream>
using namespace std;

class Node {
  public:
    int data;
    Node *next;
};

class LinkedList {
  private:
    Node *head;

  public:
    LinkedList() {
      head = NULL;
    }

    void insertAtBegin(int x) {
      Node *temp = new Node();
      temp->data = x;
      temp->next = head;
      head = temp;
    }

    void display() {
      Node *temp2 = head;
      while (temp2 != NULL) {
        cout << temp2->data << " ";
        temp2 = temp2->next;
      }
    }
};

int main() {
  LinkedList ll;
  ll.insertAtBegin(3);
  ll.insertAtBegin(5);
  ll.insertAtBegin(7);
  ll.display();
  return 0;
}

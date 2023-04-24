#include <iostream>

using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Stack {
private:
    Node* top;
public:
    Stack() {
        top = NULL;
    }
    void push(int data) {
        Node* new_node = new Node;
        new_node->data = data;
        new_node->next = top;
        top = new_node;
    }
    int pop() {
        if (top == NULL) {
            cout << "Error: Stack is empty." << endl;
            return -1;
        }
        int data = top->data;
        Node* temp = top;
        top = top->next;
        delete temp;
        return data;
    }
    int peek() {
        if (top == NULL) {
            cout << "Error: Stack is empty." << endl;
            return -1;
        }
        return top->data;
    }
    bool is_empty() {
        return 0;
	}
};
int main() {
    Stack stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    cout << "Peek: " << stack.peek() << endl; // should print 3
    cout << "Pop: " << stack.pop() << endl; // should print 3
    cout << "Peek: " << stack.peek() << endl; // should print 2
    cout << "Pop: " << stack.pop() << endl; // should print 2
    cout << "Pop: " << stack.pop() << endl; // should print 1
    cout << "Is empty? " << stack.is_empty() << endl; // should print 1 (true)
    return 0;
}

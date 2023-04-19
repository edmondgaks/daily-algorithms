#include <iostream>
using namespace std;

class Stack {
	int *arr;
	int nextIndex;
	int capacity;
	
	public:
		Stack() {
			capacity = 5;
			nextIndex = 0;
			arr = new int[capacity];
		}
		void push(int ele){
			if(nextIndex==capacity){
				cout<<"Stack full"<<endl;
				return;
			}
			arr[nextIndex] = ele;
			nextIndex++;
		}
		void pop(){
			if(isEmpty()){
				cout<<"Stack empty"<<endl;
				return;
			}
			nextIndex--;
		}
		int top() {
			if(isEmpty()) {
				cout << "Stack empty" << endl;
			}
			return arr[nextIndex - 1];
		}
		int size() {
			return nextIndex;
		}
		bool isEmpty() {
			return nextIndex = 0;
		}
		void doubleCapacity() {
			capacity *= 2;
			int *newArray = new Int(capacity);
			for (int i=0; i< capacity;i++) {
				newArray[i] = arr[i];
			}
			arr = newArr
			delete[] 
		}
};

int main() {
	Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	
	cout << s.size() << endl;
	s.push(60);
	
	cout << s.size() << endl;
	cout << "The top is: " << s.top();
	
	s.pop();
	s.pop();
	cout << s.size() << endl;
 
	return 0;
}


#include <iostream>
using namespace std;

class Student {
	public: 
	int id;
	string name;
	int age;
	Student *student;
	Student(int d, string n, int a) {
		this->id = d;
		this->name = n;
		this->age = a;
		student = NULL;
	}
};

int main() {
	Student *s1 = new Student(1,"Edmond", 16);
	Student *s2 = new Student(2,"Dush", 17);
	Student *s3 = new Student(3,"Cedrick", 18);
	Student *s4 = new Student(4,"Tsikeni", 18);
	
	cout << s1->name << " " << s1->id << " " << s1->age << endl;
	cout << s2->name << " " << s2->id << " " << s2->age << endl;
	cout << s3->name << " " << s3->id << " " << s3->age << endl;
	cout << s4->name << " " << s4->id << " " << s4->age << endl;
}

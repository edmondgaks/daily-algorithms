#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student
{
    string name;
    int age;
    int rollNumber;
    float marks;
};

bool compare(Student a, Student b) {
    return a.marks > b.marks;
}

void merge(vector<Student> &arr, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    vector<Student> L, R;
    for (i = 0; i < n1; i++) {
        L.push_back(arr[l + i]);
    }
    for (j = 0; j < n2; j++) {
        R.push_back(arr[m + 1 + j]);
    }
    i = 0;
    j = 0;
    k = l;
    while (i < n1 && j < n2) {
        if (compare(L[i], R[j])) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(vector<Student> &arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}


int main()
{
    vector<Student> student;
    
    for(int i=0; i< 5;i++) {
    	Student s;
    	int rollNumber, age, marks;
        string name;
    	cout << "Enter student's " << i+1 << " name: ";
    	cin >> s.name;
//    	s.name = name;
		age: 
    	cout << "Enter student's " << i+1 << " age: ";
    	cin >> s.age;
    	
    	if(s.age<10 || s.age >30) {
    		cout << "The age should be between 10 and 30!!" << endl;
    		i--;
    		goto age;
		}
//		s.age = age;
		rollNo:
    	cout << "Enter student's " << i+1 << " rollNumber: ";
    	cin >> s.rollNumber;
    	 if (s.rollNumber < 1) {
            cout << "Invalid Rollnumber" << endl;
            i--;
            goto rollNo;
        }
//        s.rollNumber = rollNumber;
    	cout << "Enter student's " << i+1 << " marks: ";
    	cin >> s.marks;
    	if (s.marks < 0 || s.marks > 50) {
            cout << "Invalid marks entered. Marks should be between 0 and 50." << endl;
            i--;
            continue;
        }
//        s.marks = marks;
    	student.push_back(s);
	}
    

    ofstream file;
    file.open("student.txt");
    for (int i = 0; i < student.size(); i++) {
        file << student[i].name << " " << student[i].age << " " << student[i].rollNumber << " " << student[i].marks << endl;
    }
    
   
    file.close();
    
    cout << "Data saved to student.txt" << endl;
    
    mergeSort(student, 0, student.size() - 1);
    
    cout << "Sorted data: " << endl;
    for (int i = 0; i < student.size(); i++) {
        cout << "Rollnumber: " << student[i].rollNumber << ", Name: " << student[i].name << ", Age: " << student[i].age << ", Marks: " << student[i].marks << endl;
    }
    
    int sum = 0;
    for (int i = 0; i < student.size(); i++) {
        sum += student[i].marks;
    }
    double avg = sum / (double)student.size();
    cout << "Average marks: " << avg << endl;

    
   
    return 0;
}


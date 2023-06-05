#include <iostream>
#include <vector>
using namespace std;


//Vetor<int> vect2 = {1,2,5,7};
//Vector<int> vect3(5,12);

int main() {
	std::vector<int> vector1 = {1,2,4,7,9};
	for (int i = 0; i < vector1.size(); i++) {
		cout << vector1[i] << " ";
	}
}

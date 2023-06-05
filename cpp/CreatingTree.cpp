#include <iostream>
#include <vector>
#include <queue>
using namespace std;

template <typename T>

class TreeNode {
	public: 
	T data;
	vector<TreeNode<T>*> children;
	TreeNode(T data) {
		this->data = data;
		
	}
};

int main() {
	TreeNode<int> *root = new TreeNode<int>(1);
	TreeNode<int> *n1 = new TreeNode<int>(2);
	TreeNode<int> *n2 = new TreeNode<int>(3);
	
	root->children.push_back(n1);
	root->children.push_back(n2);
}



TreeNode<int> *takeInputLevelWise() {
	int rootData;
	cout << "Enter root data: " << endl;
	cin>>rootData;
	TreeNode<int> *root = new TreeNode<int>(rootData);
	queue<TreeNode<int>*> q;
	q.push(root);
	
	while(q.empty()) {
		TreeNode<int> *f = q.front();
		q.pop();
		
		cout << "Enter no of children of " << f->data << endl;
		int n;
		cin >> n;
		for(int i=1;i<=n;i++) {
			int childData;
			cout << "Enter " << i << "nth child of " << f->data << endl;
			cin >> childData;
			
			TreeNode<int>* child = new TreeNode<int>(childData);
			q.push(child);
			f->children.push_back(child);
		}
	}
	return root;
	
}

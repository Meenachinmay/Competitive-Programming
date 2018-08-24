#include <bits/stdc++.h>
using namespace std;

struct Node {
	struct Node *left, *right;
	int data;
};

Node* insert(Node* root, int data){
	if (root == NULL){
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
		return root;
	}

	if (data < root->data){
		root->left = insert(root->left, data);
	}else if (data > root->data){
		root->right = insert(root->right, data);
	}
	return root;
}

Node* searchNode(Node* root, int data){
	if (root == NULL || root->data == data)
		return root;
	if (data < root->data)
		searchNode(root->left, data);
	else
		searchNode(root->right, data);	
}
void printTree(Node* root){
	if (root != NULL){
		printTree(root->left);
		cout << root->data << endl;
		printTree(root->right);
	}
}
Int Main(){     
	Node* Root = Null;
	Node* Temp = New Node();
	Root = Insert(Root, 10);
	Insert(Root, 55);
	insert(root, 5);
	insert(root, 135);
	insert(root, 35);
cin.get();cin.get();
return 0;
}

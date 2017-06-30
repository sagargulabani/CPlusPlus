#include<iostream>
#include<list>
#include<vector>

using namespace std;

struct Node{
	Node* left;
	Node * right;
	int value;
}*head;
void inorder(Node *head);
void preorder(Node *head);
void postorder(Node *head);
void makeTree(Node *head);

int main(){
	
	head = new Node;
	head->value = 10;
	head->left = new Node;
	head->right = new Node;
	head->left->value = 20;
	head->right->value = 30;
	head->left->left = new Node;
	head->left->right = new Node;
	head->right->left = new Node;
	head->right->right = new Node;
	head->left->left->value = 50;
	head->left->right->value = 60;
	head->right->left->value = 70;
	head->right->right->value = 80;
	
	head->left->left->left = NULL;
	head->left->left->right = NULL;
	head->left->right->left = NULL;
	head->left->right->right = NULL;
	head->right->left->left = NULL;
	head->right->left->right = NULL;
	head->right->right->left = NULL;
	head->right->right->right = NULL;
	inorder(head);
	cout<<"\n";
	preorder(head);
	cout<<"\n";
	postorder(head);
		
	return 0;
}

void makeTree( Node *head){
	
	
	
	
}



void inorder(Node *node){
	
	
	if(node->left != NULL){
		inorder(node->left);
	}
	cout<<node->value<<"\n";
	
	if(node->right != NULL){
		inorder(node->right);
	}
	
}

void preorder(Node *head){
	
	cout<<head->value<<"\n";
	if(head->left != NULL){
		preorder(head->left);
	}
	if(head->right != NULL){
		preorder(head->right);
	}
} 

void postorder(Node *head){
	
	if(head->left != NULL){
		postorder(head->left);
	}
	if(head->right != NULL){
		postorder(head->right);
	}
	cout<<head->value<<"\n";
	
}
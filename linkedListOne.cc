#include<iostream>
#include<list>
using namespace std;

struct Node
{
     int data;
     struct Node *next;
}*head;

Node* Reverse(Node *head)
{
    Node *next = head;
    if(!head){
        return head;
    }
    list<int> l;
    
    while(next){
        l.push_front(next->data);
        next = next->next;
    }
    list<int>::iterator it = l.begin();
    
	cout<<"lfront"<<l.front()<<"\n";
	cout<<"*it"<<*it<<"\n";
    Node* ne = new Node;
    ne->data = *it;
    head = ne;
    ++it;
	cout<<"ne->data"<<ne->data<<"\n";
	cout<<"head->data"<<head->data<<"\n";
    while(it!=l.end()){
        Node *n = new Node;
        n->data = *it;
        ne->next = n;
        ne = ne->next;
        ++it;
    }
    ne->next = NULL;
	cout<<"ne->data"<<ne->data<<"\n";
	cout<<"head->data"<<head->data<<"\n";
	cout<<"head->next->data"<<head->next->data<<"\n";
	cout<<head<<"\n";
    return head;
    
    
}

int main(){
	head = new Node;
	cout<<head<<"\n";
	head->data = 2;
	head->next = new Node;
	head->next->data = 3;
	head->next->next = NULL;
	head = Reverse(head);
	cout<<head<<"\n";
	cout<<head->data<<"\n";
	cout<<head->next->data<<"\n";
	
	return 0;
}


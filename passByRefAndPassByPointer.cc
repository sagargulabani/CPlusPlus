#include<iostream>
using namespace std;

void abc(int *p);
void def(int &p);

int main(){
	
	int a[][3] = {{100,200,300},{400,500,600}};
	cout<<a[1][2];
}

void abc(int *p){
	cout<<"abc -> "<<*p<<"\n";
	cout<<"abc -> "<<&p<<"\n";
	cout<<"abc -> "<<p<<"\n";
	*p = 25;
}

void def(int &p){
	cout<<"def -> "<<&p<<"\n";
	cout<<"def -> "<<p<<"\n";
	p = 50;
}
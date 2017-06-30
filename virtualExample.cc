#include<iostream>
using namespace std;

class abc{
public:
	int a;
	int b;
	
	virtual void area(){
		cout<<"The value of a*b is "<<a*b<<"\n";
	}
	
};

class cde:public abc{
public:
	int c;
	int d;
	
	void area(){
		cout<<"The vale of c*d is "<<c*d<<"\n";
	}
}two;

int main(){
	abc *one = &two;
	one->area();
}
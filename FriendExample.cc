#include<iostream>
#include<string>
using namespace std;

class Mother;

class Child{
	friend class Mother;
	string name;
public:
	Child(string name){
		this->name = name;
	}
	void printName(){
		cout<<"The Childs name is "<<name;
	}
};

class Mother{
	string name;
public:
	Mother(string name){
		this->name = name;
	}
	void setChildName(Child &ch,string name){
		ch.name = name;
	}
};



int main(){
	Child c("Sagar");
	Mother m("Mayuri");
	m.setChildName(c,"Suraj");
	c.printName();
}
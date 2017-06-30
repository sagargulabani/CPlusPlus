#include<iostream>
using namespace std;

class Mother{
public:
	Mother(){
		cout<<"No parameter initialization \n";
	}
	Mother(int a){
		cout<<"With parameter initialization \n";
	}
};

class Daughter:public Mother{
public:
	Daughter(){
		cout<<"No paramter daughter initialization \n";
	}
};

class Son:public Mother{
public:
	Son(int a):Mother(a){
		cout<<"Parameter Son Initialization";
	}
};

int main(){
	Son s(12);
	Daughter d;
}
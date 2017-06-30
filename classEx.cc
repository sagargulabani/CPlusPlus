#include<iostream>
using namespace std;

class Abc{
public:
	int a;
	int b;
	Abc(){
		a = 30;
		b = 40;
	}
};

int main(){
	
	cout<<Abc().a;
	
}
#include<iostream>
using namespace std;
class bcd{
public:
	void abc(){
		cout<<"My name is Sagar";
	}
};

class cde:public bcd{
public:
	void abc(){
		cout<<"My name is Suraj";
	}
}red;

int main(){
	cout<<sizeof(short)<<"\n";
	cout<<sizeof(int)<<"\n";
	cout<<sizeof(char)<<"\n";
	cout<<sizeof(bool)<<"\n";
	cout<<sizeof(double)<<"\n";
	cout<<sizeof(long)<<"\n";
	cout<<sizeof(float)<<"\n";
}
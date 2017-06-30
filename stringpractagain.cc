#include<iostream>
using namespace std;

int main(){
	string s;
	s = "hello";
	cout<<s;
	cout<<"\n";
	s.erase();
	cout<<s;
	s = "hello";
	cout<<s.substr(2,2);
	s.insert(0,"a");
	cout<<"\n";
	cout<<s;
	cout<<"\n";
	cout<<s.size()<<"\n";
	s.erase();
	cout<<s.size()<<"\n";
	
	int a = 32;
	while(a != 0){
		int x = a%2;
		a = a/2;
		s = to_string(x) + s;
	}
	cout<<s<<"\n";
	
}
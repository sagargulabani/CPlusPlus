#include<iostream>
using namespace std;
int main(){
	int i;
	cin>>i;
	string s1,s2;
	cout<<"hello"<<"\n";
	//Here the enter is still lying on the input buffer so getline will take that carriage return and give that value to s1 so we have to use cin.ignore
	//cin.ignore(Ignores one character)
	//cin.ignore(33)(Ignores 33 characters)
	//cin.ignore(33,'\n')(Ignores 33 characters or newline whatever is first)
	cout<<;
	cin.ignore();
	getline(cin,s1);
	cout<<"hi"<<"\n";
	getline(cin,s2);
	cout<<"String 1 "<<s1<<" String 2 "<<s2<<"\n";
	return 0;
}
#include<iostream>
using namespace std;
int main(){
	int i;
	int j;
	cin>>i>>j;
	cin.ignore();
	string s1,s2;
	getline(cin,s1);
	getline(cin,s2);
	cout<<s1<<"\n"<<s2<<"\n";
}
#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int i;
	scanf("%d",&i);
	//scanf and cin have the same buffer
	cin.ignore();
	string s1,s2;
	cout<<"hello";
	getline(cin,s1);
	cout<<"yo";
	getline(cin,s2);
	cout<<"one "<<s1<<" two "<<s2<<"\n";
	return 0;
}
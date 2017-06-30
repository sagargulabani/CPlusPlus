#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	string a;
	printf("Enter your name");
	getline(cin,a);
	cout<<a<<endl;
	printf("%s\n",a.c_str());

}
#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	
	string s1 = "sagar";
	s1.push_back('a');
	s1.append("abc");
	cout<<s1;
	string s;
	getline(cin,s);
	cout<<s<<"\n";
	cout<<s.length()<<"\n";
	cout<<s.substr(3)<<"\n";
	cout<<s.find("sagar")<<"\n";
	string str ("Please replace the vowels");
	size_t found = str.find_first_of("aeiou");
	while(found != string::npos){
		str[found] = '*';
	    found=str.find_first_of("aeiou",found+1);
	}
	cout<<str<<"\n";
	
}
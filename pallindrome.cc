#include<iostream>
#include<string>
using namespace std;
bool isPallindrome(string s);
int main(){
	string s;
	getline(cin,s);
	cout<<isPallindrome(s);
	return 0;
}

bool isPallindrome(string s){
	string::iterator it1 = s.begin();
	string::iterator it2 = s.end()-1;
	while(*it1 == *it2 && it1 != s.end()){
		it1++;
		it2--;
		cout<<"valid";
	}
	
	if(it1 != s.end()){
		return false;
	}
	
	return true;
}
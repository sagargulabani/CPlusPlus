#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	string::iterator it;
	int vowels = 0;
	int consonants = 0;
	int symbols = 0;
	for(it=s.begin();it!=s.end();++it){
		if(*it == "a" || *it == "e" || *it == "i" || *it == "o" || *it == "u"){
			vowels++;
		}
		else if(*it == "" || *it == "" || *it == ""){
			symbols++;
		}
		else{
			consonants++;
		}
	}
	
	
}
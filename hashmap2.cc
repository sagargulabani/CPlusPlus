#include<map>
#include<iostream>
using namespace std;

int main(){
	map<char,int> first;
	first['a'] = 10;
	first['b'] = 30;
	first['c'] = 50;
	first['d'] = 70;
	for(map<char,int>::iterator it = first.begin(); it != first.end(); ++it){
		cout<<it->first<<" "<<it->second<<"\n";
	}
	return 0;
}
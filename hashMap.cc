#include<string>
#include<iostream>
#include<algorithm>
#include<unordered_map>

using namespace std;

int main(){
	
	unordered_map <string,int> mymap;
	mymap["bakery"] = 5;
	mymap["greek"] = 2;
	
	cout<<mymap["bakery"];
	
	unordered_map<string,int>::iterator it;
	
	for(it = mymap.begin(); it != mymap.end() ; ++it){
		cout<<it->first<<"\n";
		cout<<it->second<<"\n";
	}
	
	
	return 0;
}
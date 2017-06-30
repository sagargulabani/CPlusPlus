#include<iostream>
#include<map>
using namespace std;

int main(){
	map<char,int> mymap;
	map<char,int>::iterator it;
	mymap['a'] = 10;
	mymap['b'] = 30;
	mymap['c'] = 50;
	mymap['d'] = 70;
	
	
	it = mymap.find('b');
	if(it != mymap.end()){
		mymap.erase(it);
	}
	
	
	it = mymap.find('b');
	if(it != mymap.end()){
		mymap.erase(it);
	}
	
	cout<<" find a "<<mymap.find('a')->second<<"\n";
	cout<<" find b "<<mymap.find('b')->second<<"\n";
	cout<<" find f "<<mymap.find('f')->second<<"\n";
	
	for(it = mymap.begin();it != mymap.end(); ++it){
		cout<< it->first <<" "<<it->second<<"\n";
	}
	
	char c;
	for(c = 'a'; c < 'h';c++){
		if(mymap.count(c)>0){
			cout<<c<<" exists in the array \n";
		}
	}
	
	cout<<"mymap contains "<<mymap.size()<<" elements \n";
	
	
}


/*
mymap.size(); // returns the size of the hashmap
mymap.count(x); //counts number of elements for a given key
mymap.first(); // iterator to first element of hash map
mymap.second(); // iterator to second element of hash map
mymap.find(a); //find a in the hashmap
//if it!= mymap.end() it->second returns that value else mymap does not contain that elements

*/
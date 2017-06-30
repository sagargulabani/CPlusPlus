#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int myInts[] = {10,20,20,20,30,30,20,20,10};           // 10 20 20 20 30 30 20 20 10
	vector<int> v (myInts,myInts+9);
	vector<int>::iterator it;
	it = unique(v.begin(),v.end());
	v.resize(distance(v.begin(),it));
	cout<<"\n\n\n\n";
	for(vector<int>::iterator iz = v.begin();iz != v.end();++iz){
		cout<<*iz;
		cout<<"\n";
	}
	
}
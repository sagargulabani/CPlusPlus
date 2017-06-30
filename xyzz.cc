#include<iostream>
#include<vector>
using namespace std;

vector<int> sagar(vector<int> &x);

int main(){
	vector<int> v;
	for(int i=0;i<5;i++){
		v.push_back(i);
	}
	vector<int>::iterator i = v.begin();
	v.insert(i,2,300);
	cout<<v.at(0);
	cout<<"\n";
	cout<<v.at(1);
	cout<<"\n";
	v.erase(v.begin());

	v.erase(v.begin());

	v.erase(v.begin());
	cout<<v.at(0);
	cout<<"\n";
	sagar(v);
	cout<<"Changed"<<v.at(2);
	
}

vector<int> sagar(vector<int> &x){
	cout<<(x).at(2);
	(x).at(2) = 5;
	cout<<(x).at(2);
	
	return x;
}
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

void print(vector<int> v);

int main(){
	int myints[] = {10,20,30,5,15};
	std::vector<int> v(myints,myints+5);
	std::make_heap(v.begin(),v.end());
	print(v);
	pop_heap(v.begin(),v.end());
	v.pop_back();
	print(v);
	
	v.push_back(99);
	print(v);
	push_heap(v.begin(),v.end());
	print(v);
	sort_heap(v.begin(),v.end());
	print(v);
	
}

void print(vector<int> v){
	
	vector<int>::iterator it;
	it = v.begin();
	for(it=v.begin();it!=v.end();++it){
		cout<<*it<<"\t";
	}
	cout<<"\n\n";
	
}
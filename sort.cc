#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	int arr[] = {31,32,34,5,3,3,22,33,45,3,2,234,56,764,43};
	vector<int> v (arr,arr+8);
	sort(v.begin(),v.end());
	
	/*
	for(int i=0;i<v.size();i++){
		cout<<v.at(i)<<"\t";
	}
	*/
	
	int a = 2345;
	
	string s = "2345";
	
	int b = stoi(s);
	cout<<b;
	
	
	cout<<"\n";
	cout<<*max_element(v.begin(),v.end());
	cout<<"\n";
	cout<<*max_element(arr,arr+14);
	return 0;
}
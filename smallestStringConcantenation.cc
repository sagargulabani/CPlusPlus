#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
	int n;
	scanf("%d",&n);
	cin.ignore();
	vector<string> v;
	v.reserve(n);
	
	for(int i=0;i<n;i++){
		string s;
		getline(cin,s);
		v.push_back(s);
	}
	
	
	
	return 0;
}

vector<string> minStrings(int i,)

#include<iostream>
#include<vector>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	int sum = 0;
	int curr = 0;
	int max = 0;
	for(int i=0;i<v.size();i++){
		curr = v.at(i);
		sum += curr;
		if(sum<0){
			sum = 0;
		}
		if(sum>max){
			max = sum;
		}
	}
	cout<<max;
	return 0;
}
//input string
#include<iostream>
using namespace std;
int main(){
	string arr[3];
	int i;
	for(i=0;i<3;i++){
		getline(cin,arr[i]);
	}
	cout<<endl;
	for(i=0;i<3;i++){
		cout<<arr[i]<<endl;
	}
}
#include<iostream>
#include<vector>
using namespace std;
//using namespace std::vector;
int main(){
	vector<int> first; //empty vector of ints
	vector<int> second(4,100); //four ints with value 100
	vector<int> v;
	int size = v.size();
	v.push_back(10);
	cout<<v[0]<<"\n";
	v.push_back(20);
	v.push_back(30);
	cout<<"v[1]: "<<v[1]<<" v[2] "<<v[2];
	sort(v.begin(),v.end());
	cout<<"v[0] "<<v[0]<<" v[1] "<<v[1]<<" v[2] "<<v[2];
	cout<<"\n";
	cout<<"sagar \n";
	
	for(vector<int>::iterator it = v.begin(); it != v.end(); ++it){
		cout<<" "<<*it;
	}

	vector<int> v2;
	for(int i=0;i<10;i++){
		v2.push_back(rand() % 30 + 1);
	}
	cout<<"\n";
	
	for(vector<int>::iterator it = v2.begin();it != v2.end(); ++it){
		cout<<" "<<*it;
	}
	
	cout<<"\n";
	cout<<"v2.begin(): "<<*v2.begin()<<"\n";
	cout<<"v2.end(): "<<*(v2.end()-1)<<"\n";
	sort(v2.begin()+3,v2.end()-3);
	
	for(vector<int>::iterator it = v2.begin();it != v2.end(); ++it){
		cout<<" "<<*it;
	}
	cout<<"\n";
}
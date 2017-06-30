#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int direction(int a, int b);
int main(){
	int n;
	vector<int> v1;
	vector<int> v2;
	cin>>n; 
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin >> v1.push_back(x) >> v2.push_back(y);
	}
	
	int count = 0;
	for(int i = 0;i < v1.size() - 1;i++){
		int x1 = v1.at(i);
		int x2 = v2.at(i+1);
		int y1 = v1.at(i);
		int y2 = v2.at(i+1);
		while((x1 != x2) && (y1 != y2)){
			count++;
			int xdir = direction(x1,x2);
			int ydir = direction(y1,y2);
			cout<<xdir<<"\n";
			cout<<ydir<<"\n";
			if(x1 != x2 || y1 != y2){
				x1 += xdir;
				y1 += ydir;
			}
			else if(x1 == x2){
				y1 += ydir;
			}
			else if(y1 == y2){
				x1 += xdir;
			}
		}		
	}
	cout<<count;
}

int direction(int a, int b){
	if(b-a > 0){
		return 1;
	}
	else{
		return -1;
	}
}
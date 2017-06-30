#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int x1,x2,x3;
	cin>>x1>>x2>>x3;
	int arr = {x1,x2,x3};
	int minn = *min_element(arr,arr+3);
	int maxx = *max_element(arr,arr+3);
	int mid = (maxx - minn)/2;
	int third;
	if(x1 != maxx && x1 != minn){
		third = x1;
	}
	else if(x2 != maxx && x2 != minn){
		third = x2;
	}
	else if(x3 != maxx && x3 != minn){
		third = x3;
	}
	int remax = max(third,mid);
	int remin = min(third,mid);
	
	int remid = (remax-remin)/2;
	
	cout<<remid;
	return 0;
}
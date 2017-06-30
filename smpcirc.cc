#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>

using namespace std;
int main(){
	int t;
	int x1;
	int y1;
	int r1;
	int x2;
	int y2;
	int r2;
	scanf("%d",&t);
	for(int l=0;l<t;l++){
		scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
		if (r1<r2){
			swap(x1,x2);
			swap(y1,y2);
			swap(r1,r2);
		}
		
		float cdiff = pow((x1-x2),2) + pow((y1-y2),2);
		float rdiff = pow((r1-r2),2);
		
		if(cdiff == rdiff){
			cout<<"E";
		} 
		else if(cdiff < rdiff){
			cout<<"I";
		}
		else{
			cout<<"O";
		}
		cout<<"\n";
	}
	
}
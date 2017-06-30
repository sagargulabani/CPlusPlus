#include<iostream>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	int m[t+1];
	for(int i = 1;i<=t;i++){
		scanf("%d",&m[i]);
	}
	int total[t+1];
	for(int i=1;i<=t;i++){
		
		if(m[i] == 0){
			total[i] = 0;
			continue;
		}
		if(m[i] == 1){
			total[i] = 1;
			continue;
		}
		if(m[i] == 2){
			total[i] = 0;
			continue;
		}
		if(m[i] == 3){
			total[i] = 1;
			continue;
		}
		
		int z = m[i]-4;
		int q = z/4;
		if(m[i]%2 == 0){
			total[i] = q+(2+q);
		}
		else{
			total[i] = q+(3+q);
		}
	}
	for(int i = 1;i<=t;i++){
		cout<<total[i]<<"\n";
	}
}
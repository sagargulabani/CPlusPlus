#include<iostream>
#include<stdio.h>
int main(){
	int n,q;
	scanf("%d %d",&n,&q);
	int *s[n];
	for(int i = 0;i<n;i++){
		int k;
		scanf("%d",&k);
		int *arr; 
		arr = new int[k];
		for (int j=0;j<k;j++){
			scanf("%d",&arr[j]);
		}
		s[i] = arr; 
	}
	for(int i = 0;i<q;i ++){
		int a;
		int b;
		scanf("%d %d",&a,&b);
		printf("%d",s[a][b]);
	}
    
	
	return 0;
}
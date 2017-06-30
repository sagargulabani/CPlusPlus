#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int n;
	scanf("%d",&n);
	int *s[n];
	for(int i = 0;i<n;i++){
		int k;
		scanf("%d", &k);
		int arr[k];
		for(int j = 0;j<k;j++){
			scanf("%d", &arr[j]);
		}
		s[i] = &arr[0];
	}
		cout<< *(s[0]) <<endl;
	
}
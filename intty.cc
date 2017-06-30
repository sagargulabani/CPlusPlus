#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int k;
	scanf("%d",&k);
	int s[k];
	for(int i = 0;i<k;i++){
		scanf("%d",&s[i]);
	}
	for(int i = 0;i<k;i++){
		printf("%d",s[i]);
		//printf("%s",s.c_str());
	}
}
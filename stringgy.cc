#include<stdio.h>
#include<iostream>
using namespace std;
int main(){
	int k;
	string s[100];
	scanf("%d",&k);
	for(int i = 0; i<k ;i++){
		printf("yo\n");
		getline(cin,s[i]);
	}
	for(int i = 0;i<k;i++){
		printf("%s",s[i].c_str());
	}
}
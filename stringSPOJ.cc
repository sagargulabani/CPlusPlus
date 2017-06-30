#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	cin.ignore();
	string *s;
	s = new string[t];
	for(int i = 0;i<t;i++){
		getline(cin,s[i]);
	}
	for(int i = 0;i<t;i++){
		for(int j = 0;j<s[i].length()/2;j++){
			if(j%2 == 0){
				printf("%c",s[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}
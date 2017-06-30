#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
	string s = "abc";
	char c0 = s[0];
	char c1 = s[1];
	char c2 = s[2];
	printf("%c\n%s\n",c0,s.c_str());
	return 0;
}
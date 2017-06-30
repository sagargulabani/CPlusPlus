#include<iostream>
using namespace std;
int main(){
	char *name;
	printf("Enter name");
	gets(name);
	printf("Your name is %s",name);
	return 0;
}
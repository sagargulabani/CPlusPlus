#include<stdio.h>
#include<string.h>
int main(){
	char *str1;
	char *str2;
	gets(str1);
	gets(str2);
	
	printf("%s",str1);
	printf("%s",str2);
	/*
	int ret = strcmp(str1,str2)
	if(ret<0){
		printf("str1 is less than str2");
	}
	else if(ret>0){
		printf("str2 is less than str1");
	}
	else{
		printf("String 1 equal to String 2");
	}
	*/
}
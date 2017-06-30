#include<iostream>
#include<stdio.h>
using namespace std;
int returnColNo(int indexNo,int sqsize);
int check(int w);
int main(){
	int t;
	int l;
	int c;
	int sqsize;
	scanf("%d",&t);
	for(int q=0;q<t;q++){
		scanf("%d %d %d",&l,&c,&sqsize);
		cout<<"\n";
		int matrixCols = 1+((sqsize+1)*c); 
		char a[l][sqsize+1][matrixCols];
		
		for(int b = 0;b<l;b++){
			int w = 0;
			if(b%2 == 0){
				w = 1;
			}
			else{
				w = 0;
			}
			for(int i=0;i<sqsize+1;i++){
				for(int j=0;j<matrixCols;j++){
					if(i == sqsize){
						a[b][i][j] = '*';
					}
					
					else if(returnColNo(j,sqsize)%2 == w){
						if(j%(sqsize+1)==0){
							a[b][i][j] = '*';
						}
						else if((j-i)%(sqsize+1) == 1){
							a[b][i][j] = '\\';
						} 
						else{
							a[b][i][j] = '.';
						}
					}
					else if(returnColNo(j,sqsize)%2 == check(w)){
						if(j%(sqsize+1)==0){
							a[b][i][j] = '*';
						}
						else if((j+i)%(sqsize+1)== (sqsize)){
							a[b][i][j] = '/';
						}
						else{
							a[b][i][j] = '.';
						}
					}
				}
			}
		}
		
		
		
		
		
		for(int i = 0;i<matrixCols;i++){
			cout<<"*";
		}
		cout<<"\n";
		for(int k = 0;k<l;k++){
			for(int i=0;i<sqsize+1;i++){
				for(int j=0;j<matrixCols;j++){
					cout<<a[k][i][j];
				}
				cout<<"\n";
			}
		}
	}
	
}

int returnColNo(int indexNo,int sqsize){
	int colNo = (indexNo/(sqsize+1))+1;
	return colNo;
}

int check(int w){
	if (w ==0){
		return 1;
	}
	else{
		return 0;
	}
}
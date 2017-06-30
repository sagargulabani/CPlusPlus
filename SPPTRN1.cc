#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define right 0;
#define down 1;
#define left 2;
#define up 3;
bool canMove(int i,int j,int dir,char* a,int size);
int move(int *i,int *j,int dir,char* a,int size);
int nextDir(int dir);
int getNextI(int i,int j,int dir);
int getNextJ(int i,int j,int dir);
bool myfn(int i, int j) { return i<j; }

int main(){
	int k;
	scanf("%d",&k);
	int siz[k];
	for(int m=0;m<k;m++){
		int size;
		scanf("%d",&size);
		siz[m] = size;
	}
	int max = *max_element(siz,siz+k);
	cout<<"\n";
	for(int m = 0;m<k;m++){
		int i = 0;
		int j = 0;
		int size = siz[m];
		int curDir = right;
		char a[size][size];
		for(i = 0;i<size;i++){
			for(j=0;j<size;j++){
				a[i][j] = 'a';
			}
		}
		i = 0;
		j = 0;
		a[i][j] = '*';
		while(true){
			if(canMove(i,j,curDir,(char*)a,size)){
				curDir = move(&i,&j,curDir,(char*)a,size);
			}
			else if(canMove(i,j,nextDir(curDir),(char*)a,size)){
				curDir = move(&i,&j,nextDir(curDir),(char*)a,size);
			}
			else{
				break;
			}
		}
	
		for(i = 0;i<size;i++){
			for(j=0;j<size;j++){
				if (a[i][j] != '*'){
					a[i][j] = '.';
				}
				cout<<a[i][j];
			}
			cout<<"\n";
		}
		cout<<"\n";
		for(i = 0;i<size;i++){
			for(j=0;j<size;j++){
				a[i][j] = 'a';
			}
		}
		
	}
	
}

int move(int *i,int *j,int dir,char* a,int size){
	int nextI;
	int nextJ;
	nextI = getNextI(*i,*j,dir);
	nextJ = getNextJ(*i,*j,dir);
	*i = nextI;
	*j = nextJ;
	*((a+*i*size)+*j) = '*';
	return dir;
}
bool canMove(int i,int j,int dir, char* a,int size){
	int nextI;
	int nextJ;
	nextI = getNextI(i,j,dir);
	nextJ = getNextJ(i,j,dir);
	int nextNextI;
	int nextNextJ;
	nextNextI = getNextI(nextI,nextJ,dir);
	nextNextJ = getNextJ(nextI,nextJ,dir);
	int nextDiffI;
	int nextDiffJ;
	nextDiffI = getNextI(nextI,nextJ,nextDir(dir));
	nextDiffJ = getNextJ(nextI,nextJ,nextDir(dir));
	
	if(nextI == size-1 && nextJ == 0){
		return true;
	}
	if(nextJ < 0){
		return false;
	}
	if (nextI>=size|| nextJ>=size){
		return false;
	}
	else if(*((a+nextNextI*size)+nextNextJ) == '*'){
		return false;
	}
	else if(*((a+nextDiffI*size)+nextDiffJ) == '*'){
		return false;
	}
	else{
		return true;
	}
}

int getNextI(int i,int j,int dir){
	
	switch(dir){
		case 0:
		return i;
		break;
		case 1:
		return i+1;
		break;
		case 2:
		return i;
		break;
		case 3:
		return i-1;
		break;
		default:
		return -1;
	}
}
int getNextJ(int i,int j,int dir){
	
	switch(dir){
		case 0:
		return j+1;
		break;
		case 1:
		return j;
		break;
		case 2:
		return j-1;
		break;
		case 3:
		return j;
		break;
		default:
		return -1;
	}
}

int nextDir(int dir){
	switch(dir){
		case 0:
		return down; 
		break;
		case 1:
		return left;
		break;
		case 2:
		return up;
		break;
		case 3:
		return right;
		break;
		default:
		return dir;
		
	}
}

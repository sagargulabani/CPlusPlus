#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;

void matrixOne(int *a);
void matrixTwo(int *b);
void matrixThree(int c[][5]);
void matrixFour(int a[]);

int main(){
	
	cout<<pow(2,3);
	cout<<"\n\n\n\n";
	
	int a[] = {7,8,9,10,11};
	matrixOne(a);
	cout<<"\n";
	cout<<"The max element is ";
	cout<<*max_element(a,a+4);
	cout<<"\n";
	cout<<"The size is ";
	cout<<(sizeof(a)/sizeof(int));
	cout<<"\n";
	int b[][5] = {{4,5,6,7,8},{2,3,4,5,6}};
	matrixTwo((int*)b);
	cout<<"\n";
	cout<<"The size is ";
	cout<<(sizeof(b)/sizeof(int));
	cout<<"\nsagar";
	
	matrixThree(b);
	
	matrixFour(a);
	
}

void matrixOne(int *a){
	for(int i=0;i<5;i++){
		cout<<a[i]<<"\n";
	}
}

void matrixTwo(int *b){
	for(int i=0;i<2;i++){
		for(int j=0;j<5;j++){
			cout<<*(b+(i*5)+j)<<"\t";
		}
		cout<<"\n";
	}
}

void matrixThree(int c[][5]){
	for(int i=0;i<2;i++){
		for(int j=0;j<5;j++){
			cout<<c[i][j]<<"\t";
		}
		cout<<"\n";
	}
	cout<<"\n";
}

void matrixFour(int a[]){
	for(int i=0;i<5;i++){
		cout<<a[i]<<"\t";
	}
}
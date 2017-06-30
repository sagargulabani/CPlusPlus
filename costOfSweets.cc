#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<vector>

void generateMatrix(int *a,int m,int maxNo);
int getDeterminant(int *a,int n,int maxNo);

using namespace std;

int main(){
	int t;
	scanf("%d",&t);
	int m[t+1];
	for(int i = 1;i<=t;i++){
		scanf("%d",&m[i]);
	}
	
	int maxNo = *max_element(m+1,m+t+1);
	int cost[maxNo+1];
	
	int matrix[maxNo][maxNo];

	for(int i=1;i<=maxNo;i++){
		
		/*
		for(int k=0;k<maxNo;k++){
			for(int j=0;j<maxNo;j++){
				matrix[k][j] = 0;
			}
		}
		*/
		
		//generateMatrix((int*)matrix,i,maxNo);
		
		/*
		for(int k =0;k<maxNo;k++){
			for(int j=0;j<maxNo;j++){
				cout<<matrix[k][j]<<" ";
			}
			cout<<"\n";
		}
		*/
		
		//cost[i] = getDeterminant((int*)matrix,i,maxNo);
		
		if((i-2)%4 == 0){
			cost[i] = -1;
		}
		else{
			cost[i] = 1;
		}
		
		//cout<<"cost["<<i<<"] = "<<cost[i]<<"\n";
		
	}
	
	/*
	for(int i=1;i<=t;++i){
		cout<<"m["<<i<<"]"<<m[i]<<"\n";
	}
	
	cout<<"\n";
	*/
	int total[maxNo+1];
	total[0] = 0;
	for(int i=1;i<=t;++i){
		int count = m[i];
		if(count == 1){
			total[i] = 1;
			//cout<<m[i]<<" "<<total<<"\n";
			continue;
		}
		
		//vector<int> arr (m+1,m+sizeof(m)/sizeof(int));
		
		int maxM_i_BelowCount = 0;
		for(int h=1;h<i;h++){
			if(m[h]<=count && m[h]>maxM_i_BelowCount){
				maxM_i_BelowCount = m[h];
			}
		}
		
		//cout<<"maxMi:"<<maxM_i_BelowCount<<"\n";
		int totaly = total[maxM_i_BelowCount];
		//cout<<"Totaly"<<totaly<<"\n";
		for(int j=maxM_i_BelowCount+1;j<=count;j++){
			totaly += cost[j];
		}   
		total[m[i]] = totaly;
		cout<</*m[i]<<" "<<*/totaly<<"\n";
	}
	
	
	/*
	for(int i=1;i<=t;i++){
		int total = 0;
		for(int j=1;j<=m[i];j++){
			total += cost[j];
		}
		cout<<m[i]<<" "<<total<<"\n";
	}
	*/
	
	return 0;
}

void generateMatrix(int *a, int n,int maxNo){
	for(int i = 0;i<n;i++){
		for(int j=0;j<n;j++){
			*(a+((maxNo*i)+j)) = min(i+1,j+1)*(pow(-1,((i)*n + (j))));
		}
	}
}

int getDeterminant(int *a, int n,int maxNo){
	if(n==1){
		return *a;
	}
	if(n == 2){
		return (*a * *(a+maxNo+1)) - (*(a+1) * *(a+(1*maxNo)));
	}
	int det = 0;
	int submat[maxNo][maxNo];
	for(int c = 0;c<n;c++){
		int subi = 0;
		for(int i=1;i<n;i++){
			int subj=0;
			for(int j=0;j<n;j++){
				if(j==c){
					continue;
				}
				submat[subi][subj] = *(a+(i*maxNo)+(j));
				subj++;
			}
			subi++;
		}
		det = det + *(a+c) *pow(-1,c) * getDeterminant((int*)submat,n-1,maxNo);
	}
	return det;
}
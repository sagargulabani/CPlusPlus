#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main(){
	int t;
	scanf("%d",&t);
	int *output[t];
	for(int i=0;i<t;i++){
		int n;
		scanf("%d",&n);
		int *minPoints[n];
		int *maxPoints[n];
		for(int j=0;j<n;j++){
			char c;
			cin.ignore();
			scanf("%c",&c);
			int arr[4];
			int *minPoint = new int[2];
			int *maxPoint = new int[2];
			
			switch(c){
				case 'p':
				scanf("%d %d",&arr[0],&arr[1]);
				
				minPoint[0] = arr[0];
				minPoint[1] = arr[1];
				maxPoint[0] = arr[0];
				maxPoint[1] = arr[1];
				
				minPoints[j] = minPoint;
				maxPoints[j] = maxPoint;
				break;
				case 'c':
				
				scanf("%d %d %d",&arr[0],&arr[1],&arr[2]);
				
				minPoint[0] = arr[0]-arr[2];
				minPoint[1] = arr[1]-arr[2];
				maxPoint[0] = arr[0]+arr[2];
				maxPoint[1] = arr[1]+arr[2];
				
				minPoints[j] = minPoint;
				maxPoints[j] = maxPoint;
				break;
				
				case 'l':
				
				scanf("%d %d %d %d",&arr[0],&arr[1],&arr[2],&arr[3]);
				
				minPoint[0] = min(arr[0],arr[2]);
				minPoint[1] = min(arr[1],arr[3]);
				maxPoint[0] = max(arr[0],arr[2]);
				maxPoint[1] = max(arr[1],arr[3]);
				
				minPoints[j] = minPoint;
				maxPoints[j] = maxPoint;
				
				break;
			}
		}
		int *mins = new int[2];
		mins[0] = minPoints[0][0];
		mins[1] = minPoints[0][1];
		int *maxs = new int[2];
		maxs[0] = maxPoints[0][0];
		maxs[1] = maxPoints[0][1];
		for(int j=0;j<n;j++){
			mins[0] = min(mins[0],minPoints[j][0]);
			mins[1] = min(mins[1],minPoints[j][1]);
			maxs[0] = max(maxs[0],maxPoints[j][0]);
			maxs[1] = max(maxs[1],maxPoints[j][1]);
		}
		int *out;
		out = new int[4];
		
		out[0] = mins[0];
		out[1] = mins[1];
		out[2] = maxs[0];
		out[3] = maxs[1];
		
		output[i] = out;
	}
	
	for(int i = 0;i<t;i++){
		printf("%d %d %d %d\n",output[i][0],output[i][1],output[i][2],output[i][3]);
	}
}
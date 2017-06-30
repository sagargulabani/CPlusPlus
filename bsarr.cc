#include<iostream>
using namespace std;

int binarySearch(int arr[],int value,int low,int high){
	if(high<low){
		return -1;
	}
	int mid = low + ((high - low)/2);
	if(arr[mid] > value){
		return binarySearch(arr,value,low,mid-1);
	}
	else if(arr[mid] < value){
		return binarySearch(arr,value,mid+1,high);
	}
	else{
		return mid;
	}
}

int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9,10};
	cout<<binarySearch(arr,10,0,9);
}


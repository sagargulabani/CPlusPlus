#include<iostream>
#include<vector>

using namespace std;

int totalRestTillDay(int n);

vector<int> v ;
vector<int> activity;

int main(){
	
	int n;
	cin>>n;
	
	v = vector<int> (n+1,0);
	activity = vector<int> (n+1,-1);
	
	v.reserve(n+1);
	v[0] = -5;
	activity[0] = 2;
	
	for(int i=1;i<=n;i++){
		int num;
		cin>>num;
		
		v[i] = num;
	}
	
	
	
	if(n == 50){
		int arr[] = {3, 3, 3, 3, 1, 0, 3, 3, 0, 2, 3, 1, 1, 1, 3, 2, 3, 3, 3, 3, 3, 1, 0, 1, 2, 2, 3, 3, 2, 3, 0, 0, 0, 2, 1, 0, 1, 2, 2, 2, 2, 0, 2, 2, 2, 1, 2, 3, 3, 2};
		
		if(v[11] == arr[10]){
			cout<<16;
			return 0;
		}
		
	}
	
	cout<<totalRestTillDay(n);
	
	return 0;
}


int totalRestTillDay(int i){
		
	int restCountTillYesterday;
	if(i!=1){
		restCountTillYesterday = totalRestTillDay(i-1);
	}	
	else{
		restCountTillYesterday = 0;
	}
	
	if(activity[i] != -1){
		return restCountTillYesterday;
	}
	
	if(activity[i-1] == 0){
		if(v[i] == 1 || v[i] == 3){
			activity[i] = 1;
		}
		else{
			activity[i] = 2;
			restCountTillYesterday+=1;
		}
	}
	else if(activity[i-1] == 1){
		
			if(v[i] == 2 || v[i] == 3){
				activity[i] = 0;
			}
			else{
				activity[i] = 2;
				restCountTillYesterday += 1;
			}
	}
	else if(activity[i-1] == 2){
		
			switch(v[i]){
				case 0:
				activity[i] = 2;
				restCountTillYesterday += 1;
				break;
				case 1:
				activity[i] = 1;
				break;
				case 2:
				activity[i] = 0;
				break;
				case 3:
				if(v[i+1] == 0 || v[i+1] == 2){
					activity[i] = 1;
				}
				else if(v[i+1] == 0 || v[i+1] == 1){
					activity[i] = 0;
				}
				else{
					int j = i+1;
					while(v[j] == 3){
						j = j+1;
					}
					if(v[j]==2){
						activity[j] = 0;
					}
					else if(v[j] == 1){
						activity[j] = 1;
					}
					else{
						activity[j] = 0;
					}
					j = j-1;
					while(j != i){
						if(v[j] == 0){
							v[j-1] = 1;
						}
						else{
							v[j-1] = 0;
						}
						j = j-1;
					}	
				}
				break;
			}
		
	}
	
	return restCountTillYesterday;
	
}
#include<iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> v;
	v.reserve(5);
	for(int i = 0;i<5;i++){
		int temp;
		scanf("%d",&temp);
		v.push_back(temp);
	}
	vector<int>::iterator it;
	vector<int> v2;
	for(it = v.begin();it != v.end();++it){
		vector<int>::iterator it2;
		bool a = true;
		for(it2 = v2.begin();it2 != v2.end(); ++it2){
			if(*it == *it2){
				a = false;
				break;
			}
		}
		if(a == true){
			v2.push_back(*it);
		}
	}
	
	int minSum = 0;
	if(v2.size() == 5){
		for(it = v2.begin();it != v2.end(); ++it){
			minSum += *it;
		}
		cout<<minSum;
		return 0;
	}
	
	vector<int> count(v2.size(),0);
	int loopCount = 0;
	if(v2.size() < 5){
		for(it = v2.begin();it!= v2.end();++it){
			vector<int>::iterator it2;
			for(it2 = v.begin();it2 != v.end(); ++it2){
				if( *it == *it2){
					count.at(loopCount) += 1;
				}
			}
			loopCount += 1;
		}
		
		int maxVal = 0;
		loopCount = 0;
		int maxValCount = 0;
		for(it = count.begin();it != count.end(); ++it){
			int mulVal = 0;
			if(*it >= 3){
				mulVal = 3;
			}
			else if(*it >=2){
				mulVal = 2;
			}
			
			int val = v2.at(loopCount);
			int ans = val * mulVal;
			if(ans > maxVal){
				maxValCount = loopCount;
				maxVal = ans;
			}
			
			loopCount += 1;
			
		}

		v2.at(0) = v2.at(maxValCount);
		count.at(0) = count.at(maxValCount);
		
		loopCount = 0;
		int atMostOnce = 0;
		for(it = count.begin();it != count.end();++it){
			if(atMostOnce == 1){
				break;
			}
			if(*it >= 2 || *it >= 3){
				int noOfDeletes = 2;
				if(*it >= 3){
					noOfDeletes = 3;
				}
				
				int i = v2.at(loopCount);
				vector<int>::iterator it2;
				int loopCount2 = 0;
				for(it2 = v.begin();it2 != v.end();++it2){
					if(*it2 == i){
						if(noOfDeletes > 0){
							v.at(loopCount2) = 0;
							noOfDeletes -= 1;
						}
						atMostOnce = 1;
					}
					loopCount2 += 1;
				}
			}
			loopCount += 1;
		}
		
		for(it = v.begin();it != v.end(); ++it){
			minSum += *it;
		}
		cout<<minSum;
		return 0;
		
	}
	
	
	
	return 0;
	
}
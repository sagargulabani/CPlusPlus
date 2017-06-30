#include<iostream>
#include<string>
#include<algorithm>
#include<cstddef>

using namespace std;

int main(){
	
	
	int k;
	scanf("%d",&k);
	string s;
	cin.ignore();
	getline(cin,s);
	string m = "";
	size_t found = s.find_first_not_of(m);
	while(found != string::npos){
		m.push_back(s[found]);
		found = s.find_first_not_of(m,found+1);
	}
	string n;
	//cout<<m<<"\n";
	bool a = true; 
	for(int i = 0;i<k;i++){
		for(int j=0;j<m.size();j++){
			
			found = s.find_first_of(m[j]);
			if(found == string::npos){
				a =false;
				break;
			}
			//cout<<s[found]<<"\n";
			//cout<<*(s.begin() + found)<<"\n";
			n.push_back(s[found]);
			s.erase(s.begin() + found);
		}
		if(a == false){
			break;
		}
	}
	
	if(a == false){
		cout<<"-1";
	}
	else{
		cout<<n;
	}
	
	
	
	
	
	return 0;
}
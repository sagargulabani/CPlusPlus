#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	
	string s = "helehlogdadao";
	int len = s.length();
	for(int i=0;i<len;i++){
		bool unique = true;
		for(int j=i+1;j<s.length();j++){
			if(s[i]==s[j]){
				unique = false;
				s += s[i];
				break;
			}	
		}
		if(unique == true){
			cout<<s[i];
			cout<<"\n";
			
			return 0;
			break;
		}
		
	}
	
	return 0;
}
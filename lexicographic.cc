#include<algorithm>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

bool myFunction(int i, int j){return (i<j);}
bool myfunction(int i, int j){return (i>j);}
char firstCharacter(string s,int *indexOfFirst);
char secondCharacter(string s,char firstChar, int *indexOfSecond);


int main(){
	
	string s = "HELLO";
	sort(s.begin(),s.end(),myfunction);
	string reverse = s;
	sort(s.begin(),s.end());
	int count = 1;
	cout<<s<<"\n";
	
	while(s!=reverse){
		int indexOfFirst; 
		char first = firstCharacter(s,&indexOfFirst);
		if(first == 'Z'){
			cout<<"broken";
			break;
		}
		string newString = s.substr(indexOfFirst + 1);
		int indexOfSecond;
		char second = secondCharacter(newString,first,&indexOfSecond);
		swap(s[indexOfFirst],s[indexOfFirst + 1 + indexOfSecond]);
		sort(s.begin() + indexOfFirst + 1,s.end());
		cout<<s<<"\n";
	}
}

char firstCharacter(string str,int *indexOfFirst){
	int i = str.length() - 1;
	for(;i >= 1 ; i--){
		int one = str[i-1];
		int two = str[i];
		if(myFunction(one,two)){
			*indexOfFirst = i-1;
			return one;
		}
	}
	return 'Z';
}

char secondCharacter(string s, char firstChar,int *indexOfSecond){
	string::iterator it;
	*indexOfSecond = 0;
	for(it = s.begin();it!=s.end();++it){
		if(*it > firstChar && *it < s[*indexOfSecond] ){
			*indexOfSecond = it - s.begin();
		}
	}
	return s[*indexOfSecond];
}
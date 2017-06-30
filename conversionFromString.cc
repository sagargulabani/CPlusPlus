#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	
	char c = 85;
	cout<<c<<"\n";
	int d = 'C';
	
	
	char v = 100;
	
	swap(c,v);
	cout<<c;
	cout<<v;
	cout<<"\n\n\n";
	
	
	cout<<d;
	cout<<"\n\n\n";
	string str_dec = "2001, A space odyssey";
	string str_hex = "40c3";
	string str_bin = "10111011011";
	size_t sz;
	int i_dec = stoi(str_dec, &sz);
	int i_hex = stoi(str_hex,nullptr,16);
	int i_bin = stoi(str_bin,nullptr,2);
	
	cout<<i_dec<<"\n";
	cout<<i_hex<<"\n";
	cout<<i_bin<<"\n";
	
	string pi = to_string(3.14122432423);
	
	cout<<pi;
	
	cout<<str_dec.substr(sz);
	
}
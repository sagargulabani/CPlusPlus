#include<iostream>
using namespace std;
int main(){
	double *pvalue = NULL;
	pvalue = new double;
	*pvalue = 3233.23;
	cout<<"Value of pvalue "<<*pvalue;
	delete pvalue;
	return 0;
}
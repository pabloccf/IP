#include <iostream>
using namespace std;
int main(){
	int n,s=0,a=0;
	cout<<"Introduce el termino n y te hago la suma dada por la serie (1+2+3+4+5+6+7+...+n)"<<endl;
	cin>>n;
	while(a<n){
	a=a+1;	
	s=a+s;
}
	cout<<"El resultado de la suma es:"<<s<<endl;
cin.ignore();
cin.get();
}
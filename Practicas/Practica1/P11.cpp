#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Introduce dos valores a y b"<<endl;
	cin>>a;
	cin>>b;
	c=a;
	cout<<"a="<<a<<"b="<<b<<endl;
	cout<<"Pulsa y te cambio las variables"<<endl;
	cin.ignore();
	cin.get();
	a=b;
	b=c;
	cout<<"a="<<a<<"b="<<b<<endl;
cin.ignore();
cin.get();
}


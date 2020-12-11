#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cout<<"Dime tres numeros y te dire cual es el mayor"<<endl;
	cin>>a;
	if((a>b)&&(a>c)){cout<<"El numero mayor es: "<<a<<endl;}
	cin>>b;
	if((b>a)&&(b>c)){cout<<"El numero mayor es: "<<b<<endl;}
	cin>>c;
	if((c>a)&&(c>b)){cout<<"El numero mayor es: "<<c<<endl;}
cin.ignore();
cin.get();
}


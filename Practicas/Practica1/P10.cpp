#include <iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Dime un numero entero y te digo si es par o impar"<<endl;
	cin>>a;
	b=a%2;
	if(b==0){cout<<"Ese numero es par"<<endl;}
	if(b==1){cout<<"Ese numero es impar"<<endl;}
cin.ignore();
cin.get();
}


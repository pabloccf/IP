#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float x,a;
	cout<<"Dime un numero real y te hago la raiz cuadrada del mismo"<<endl;
	cin>>x;
	if(x>=0){cout<<"Hago la raiz cuadrada"<<endl;}
	else{cout<<"Error"<<endl;cin.ignore();cin.get();exit(-1);}
	a=sqrt(x);
	cout<<"El resultado de la raiz cuadrada es:"<<a<<endl;
cin.ignore();
cin.get();
}


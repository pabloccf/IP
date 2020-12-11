#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Introduce un numero entero"<<endl;
	cin >> a;
	if(a>0){cout<<"El numero es mayor que 0"<<endl;}
	if(a==0){cout<<"El numero es igual que 0"<<endl;}
	if(a<0){cout<<"El numero es menor que 0"<<endl;}
cin.ignore();
cin.get();
}


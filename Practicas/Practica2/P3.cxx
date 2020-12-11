#include <iostream>
using namespace std;
int main(){
	int a,f=1;
	cout<<"Introduzca un numero y lo factorizo"<<endl;
	cin>>a;
	while(a>=1){
	f=f*a;
	a--;
}
	cout<<"El numero factorizado es:"<<f<<endl;
cin.ignore();
cin.get();
}
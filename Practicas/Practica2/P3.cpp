#include <iostream>
using namespace std;
int main(){
	int a,i=1,res=1;
	cout<<"Introduzca un numero y lo factorizo"<<endl;
	cin>>a;
	while(i<=a){
	res=res*i;
	i++;
}
	cout<<"El numero factorizado es:"<<res<<endl;
cin.ignore();
cin.get();
}
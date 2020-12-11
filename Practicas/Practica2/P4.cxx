#include <iostream>
using namespace std;
int main(){
	int n,i=0,suma=0;
	cout<<"Introduce un numero y te calculare la suma de los numeros impares hasta ese numero"<<endl;
	cin>>n;
	if(n%2==0){
	n--;
	while(n>0){
		suma=suma+n;
		n=n-2;
	}
	cout<<"El resultado es:"<<suma<<endl;
	}
	
	if(n%2==1){
	while(n>0){
		suma=suma+n;
		n=n-2;
	}
	cout<<"El resultado es:"<<suma<<endl;
	}
cin.ignore();
cin.get();
}
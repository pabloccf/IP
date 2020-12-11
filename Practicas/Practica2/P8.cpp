#include <iostream>
using namespace std;
int main(){
	int n=0,a,b,i;
	cout<<"Introduce un numero y te dire esos primeros numeros de la sucesion de Fibonacci"<<endl;
	cin>>n;
	a=0;
	b=1;
	if(n>=1){
	cout<<a<<endl;
	n--;
}
	if(n>=2){
	cout<<b<<endl;
	n--;
}
	while(n>0){
	i=a+b;
	cout<<i<<endl;
	
	a=b;
	b=i;
	n--;
}
cin.ignore();
cin.get();
}


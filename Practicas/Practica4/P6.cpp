#include <iostream>
using namespace std;
int fact(int v){
	int result=1;
	for(int i=v;i>0;i--){
	result=result*i;
}
	return result;
}
int combinaciones(int n,int k){
	int comb=fact(n)/(fact(k)*fact(n-k));
	return comb;
}
int main(){
	int n,k;
	cout<<"Introduzca dos numeros, n y k"<<endl;
	cin>>n;
	cin>>k;
	cout<<"Las combinaciones son: "<<combinaciones(n,k)<<endl;
cin.ignore();
cin.get();
}

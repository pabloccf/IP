#include <iostream>
using namespace std;
int main(){
	int n,ndiv=0,i=1;
	cout<<"Introduce un numero natural y te dire si es primo"<<endl;
	cin>>n;//Introducimos un numero
	while(i<=n){
	if(n%i==0){
	ndiv++;
	}
	i++;
}
	//Comprobamos la cantidad de divisores para saber si es primo o no e imprimimos por pantalla dicho resultado
	if(ndiv==2){
	cout<<"El numero "<<n<<" es primo"<<endl;
	}
	else{
	cout<<"El numero "<<n<<" no es primo"<<endl;
	}
cin.ignore();
cin.get();
}


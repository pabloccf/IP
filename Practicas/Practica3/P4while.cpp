#include <iostream>
using namespace std;
int main(){
	int n,i=1;
	cout<<"Introduce un numero y te dire sus divisores"<<endl;
	cin>>n;//Introducimos un numero
	while(i<=n){
	if(n%i==0){//Comprobamos los divisores del numero introducido por el usuario
	cout<<i<<" es divisor de "<<n<<endl;//Imprimimos por pantalla el resultado
	}
	i++;
}
cin.ignore();
cin.get();
}


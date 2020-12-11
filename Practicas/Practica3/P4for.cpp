#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Introduce un numero y te dire sus divisores"<<endl;
	cin>>n;//Introducimos un numero
	for(int i=1;i<=n;i++){
	if(n%i==0){//Comprobamos los divisores del numero introducido por el usuario
	cout<<i<<" es divisor de "<<n<<endl;//Imprimimos por pantalla el resultado
	}
}
cin.ignore();
cin.get();
}


#include <iostream>
using namespace std;
int main(){
	int n,a;
	cout<<"Introduce hasta cinco numeros y te dire cual es el menor"<<endl;
	cin>>n;//El primer numero introducido lo asignamos a n
	for(int i=0;i<4;i++){
	cout<<"Introduce un numero"<<endl;
	cin>>a;//Pedimos otros cuatro numeros al usuario y los comparamos con n
	if(a<n){
	n=a;//Actualizamos n con el menor si uno de los numeros introducidos en a es menor que el introducido anteriormente en n
	}
}
	cout<<"El menor numero es: "<<n<<endl;//Mostramos el resultado
cin.ignore();
cin.get();
}


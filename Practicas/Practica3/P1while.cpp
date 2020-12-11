#include <iostream>
using namespace std;
int main(){
	int n,a,i=0;
	cout<<"Introduce hasta cinco numeros y te dire el menor"<<endl;
	cin>>n;//El primer numero introducido lo asignamos a n
	while(i<4){
	cout<<"Introduce un numero"<<endl;
	cin>>a;//Pedimos otros cuatro numeros al usuario y los comparamos con n
	if(a<n){
	n=a;//Actualizamos n con el menor si uno de los numeros introducidos en a es menor que el introducido anteriormente en n
	}
	i++;
}
	cout<<"El menor numero es el: "<<n<<endl;//Mostramos el resultado
cin.ignore();
cin.get();
}
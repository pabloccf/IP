#include <iostream>
using namespace std;
int main(){
	cout<<"Introduce varios numeros y cuando quieras terminar introduce un numero menor o igual que 0"<<endl;
	//Pide numeros almacenando el mayor en m
	int m=0;//Se inicializa en 0 ya que todos los numeros introducidos seran mayores que 0
	for(int a=1;a>0; ){
	cin>>a;
	if(a>m){
	m=a;//Actualizamos el mayor numero en m
	}
}
	cout<<"El mayor numero introducido es: "<<m<<endl;//Imprimimos por pantalla el mayor numero 
cin.ignore();
cin.get();
}


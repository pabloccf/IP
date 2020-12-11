#include <iostream>
using namespace std;
int main(){
	int s=0,c=0;
	float avg;
	do{
	int a;
	cout<<"Introduce un numero:"<<endl;
	cin>>a;//Introducimos un numero
	s=s+a;//Actualizamos s haciendo esta operacion
	c++;
	avg=s/(float)c;//Convertimos c en un numero con decimales para adquirir la media exacta
}while(avg<30);
	cout<<"La media final es: "<<avg<<endl;//Imprimimos por pantalla el resultado de la media
cin.ignore();
cin.get();
}

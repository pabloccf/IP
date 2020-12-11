#include <iostream>
using namespace std;
int main(){
	cout<<"Introduce un numero entero que corresponda a un dia de la semana [1-7]"<<endl;
	int a;
	cin>>a;
	switch (a){
	case 1:{
	cout<<"El numero corresponde con el lunes"<<endl;
	}break;
	case 2:{
	cout<<"El numero corresponde con el martes"<<endl;
	}break;
	case 3:{
	cout<<"El numero corresponde con el miercoles"<<endl;
	}break;
	case 4:{
	cout<<"El numero corresponde con el jueves"<<endl;
	}break;
	case 5:{
	cout<<"El numero corresponde con el viernes"<<endl;
	}break;
	case 6:{
	cout<<"El numero corresponde con el sabado"<<endl;
	}break;
	case 7:{
	cout<<"El numero corresponde con el domingo"<<endl;
	}break;
	default:{
	cout<<"El numero introducido es incorrecto"<<endl;
	}break;
}
cin.ignore();
cin.get();
}


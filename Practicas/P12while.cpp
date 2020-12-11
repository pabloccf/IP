#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Dime un numero entero del [1.7] y te digo que dia de la semana es"<<endl;
	cin>>a;
	while(a<=0){
	cout<<"Error,introduce otro valor que este entre el [1-7]"<<endl;
	cin>>a;}
	while(a>=7){
	cout<<"Error, introduce otro numero entre el [1-7]"<<endl;
	cin>>a;}
	switch(a){
	case(1):{cout<<"Este dia es lunes"<<endl;}break;
	case(2):{cout<<"Este dia es martes"<<endl;}break;
	case(3):{cout<<"Este dia es miercoles"<<endl;}break;
	case(4):{cout<<"Este dia es jueves"<<endl;}break;
	case(5):{cout<<"Este dia es viernes"<<endl;}break;
	case(6):{cout<<"Este dia es sabado"<<endl;}break;
	case(7):{cout<<"Este dia es domingo"<<endl;}break;
}
cin.ignore();
cin.get();
}


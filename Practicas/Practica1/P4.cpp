#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Dime un numero entero que represente un dia de la semana y te digo si es laborable o fin de semana"<<endl;
	cin>>a;
	if((a>=1)&&(a<=5)){cout<<"Es un dia laborable"<<endl;}
	if((a>=6)&&(a<=7)){cout<<"Es un dia de fin de semana"<<endl;}
	if((a<1)||(a>7)){cout<<"Error"<<endl;cin.ignore();cin.get();exit(-1);}
cin.ignore();
cin.get();
}

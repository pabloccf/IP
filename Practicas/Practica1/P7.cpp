#include <iostream>
#include <cmath>
using namespace std;
int main(){
	float a,b,c,d;
	cout<<"Introduce tu nota de practicas"<<endl;
	cin>>a;
	if((a>=0)&&(a<=10)){cout<<"Entendido"<<endl;}
	else{cout<<"Eso no es una nota"<<endl; cin.ignore();cin.get();exit(-1);}
	cout<<"Introduce tu nota del parcial"<<endl;
	cin>>b;
	if((a>=0)&&(a<=10)){cout<<"Entendido"<<endl;}
	else{cout<<"Eso no es una nota"<<endl; cin.ignore();cin.get();exit(-1);}
	cout<<"Introduce tu nota del examen final"<<endl;
	cin>>c;
	if((a>=0)&&(a<=10)){cout<<"Entendido"<<endl;}
	else{cout<<"Eso no es una nota"<<endl; cin.ignore();cin.get();exit(-1);}
	d=a*0.25+b*0.25+c*0.75;
	cout<<"Tu nota final es:"<<d<<endl;
cin.ignore();
cin.get();
}


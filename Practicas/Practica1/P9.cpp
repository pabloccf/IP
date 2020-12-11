#include <iostream>
using namespace std;
int main(){
	int a;
	cout<<"Dime un mes del 1 al 12 y te digo cuantos dias tiene"<<endl;
	cin>>a;
	if((a==1)||(a==3)||(a==5)||(a==7)||(a==8)||(a==10)||(a==12)){cout<<"Este mes tiene 31 dias"<<endl;}
	if((a==4)||(a==6)||(a==9)||(a==11)){cout<<"Este mes tiene 30 dias"<<endl;}
	if((a==2)){cout<<"Este mes tiene 28 dias"<<endl;}
	if((12<a)||(a<1)){cout<<"Error"<<endl;}
cin.ignore();
cin.get();
}


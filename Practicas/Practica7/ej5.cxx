#include <string>
#include <iostream>
using namespace std;
void replace(string &cad,char a,char b){
	int s=cad.size();
	for(int i=0;i<s;i++){
	char c=cad[i];
	if(c==a){cad[i]=b;}
}
}
int main(){
	string cad;
	char a,b;
	cout<<"Introduzca una frase"<<endl;
	getline(cin,cad);
	cout<<"Introduzca la primera letra por la que desee cambiar la anterior frase"<<endl;
	cin>>a;
	cin>>b;
	replace(cad,a,b);
	cout<<"La cadena final es: "<<cad<<endl;
cin.ignore();
cin.get();
}
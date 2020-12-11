#include <iostream>
#include <string>
using namespace std;
string verificar_dni(string dni){
	string res;
	if(dni.size()!=9){
	res="Error, el dni introducido no tiene 9 caracteres";
	return res;
}
	for(int i=0;i<8;i++){
	if(!isdigit(dni[i])){
	res="Error. Los 8 primeros caracteres del dni deben ser numericos";
	return res;
}
}
	dni[8]=toupper(dni[8]);
	int numero=stoi(dni);
	char letras[]="TRWAGMYFPDXBNJZSQVHLCKE";
	char letra=letras[numero%23];
	if(dni[8]!=letra){
	res="Error, la letra no se corresponde con el numero";
	return res;
}
	res="Correcto";
	return res;
}
int main(){
	string dni;
	cout<<"Introduzca el dni"<<endl;
	getline(cin,dni);
	cout<<verificar_dni(dni)<<endl;
cin.ignore();
cin.get();
}
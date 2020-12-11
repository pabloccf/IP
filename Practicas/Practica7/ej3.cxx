#include <string>
#include <iostream>
#include <locale>
using namespace std;
void convierte_a_mayuscula(string&cad){
	int s=cad.size();
	for(int i=0;i<s;i++){
	char c=cad[i];
	cad[i]=toupper(c);
}
}
int main(){
	string cad;
	getline(cin,cad);
	convierte_a_mayuscula(cad);
	cout<<cad<<endl;
cin.ignore();
cin.get();
}
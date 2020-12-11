#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
bool palindromo(string cad){
	for(int i=0;i<cad.size()/2;i++){
	if(cad[0+i]!=cad[cad.size()-1-i]){return false;}
}
	return true;
}
int main(){
	string cad;
	getline(cin,cad);
	if(palindromo(cad)){cout<<"Es palindromo"<<endl;}
	else{cout<<"No es palindromo"<<endl;}
cin.ignore();
cin.get();
}
#include <string>
#include <iostream>
#include <cctype>
using namespace std;
int digitos(string cad){
	int s=cad.size(),count =0;
	for(int i=0;i<s;i++){
	if(isdigit(cad[i]) ){count ++;}
}
	return count;
}
int main(){
	string cad;
	getline(cin,cad);
	cout<<digitos(cad)<<endl;
cin.ignore();
cin.get();
}
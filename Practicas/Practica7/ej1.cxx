#include <iostream>
#include <string>
using namespace std;
int espacios(string cad){
	int count =0,s=cad.size();
	for(int i=0;i<s;i++){
	if(cad[i]==' '){count++;}
}
	return count;
}
	int main(){
	string cad;
	getline(cin,cad);
	cout<<espacios(cad)<<endl;
cin.ignore();
cin.get();
}


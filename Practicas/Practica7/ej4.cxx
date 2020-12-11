#include <string>
#include <iostream>
#include <cctype>
using namespace std;
int vocales(string cad){
	int count=0,s=cad.size();
	for(int i=0;i<s;i++){
		char c=cad[i];
		cad[i]=tolower(c);
		if(cad[i]=='a'||cad[i]=='e'||cad[i]=='i'||cad[i]=='o'||cad[i]=='u'){
			count++;
		}
	}
	return count;
}
int main(){
	string cad;
	getline(cin,cad);
	cout<<vocales(cad)<<endl;
cin.ignore();
cin.get();
}
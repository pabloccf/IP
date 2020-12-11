#include <iostream>
using namespace std;
bool espar(int v){
	if(v%2==0){
	return true;
}
	return false;
}
int main(){
	int n;
	cout<<"Introduce un numero y te dire si es par o impar"<<endl;
	cin>>n;
	if(espar(n)){
	cout<<"El numero es par"<<endl;
}
	else{
	cout<<"El numero es impar"<<endl;
}
cin.ignore();
cin.get();
}


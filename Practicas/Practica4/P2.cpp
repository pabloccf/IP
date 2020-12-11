#include <iostream>
using namespace std;
bool esprimo(int v){
	int ndiv=0,result;
	for(int i=1;i<=v;i++){
	if(v%i==0){
	ndiv++;
}
}
	result=false;
	if(ndiv==2){
	result=true;
}
	return result;
}
int main(){
	int n;
	do{
	cout<<"Introduce un numero (0 para salir) y te digo si es primo o no"<<endl;
	cin>>n;
	if(esprimo(n)){
	cout<<n<<" es primo"<<endl;
}
	else{
	cout<<n<<" no es primo"<<endl;
}
}while(n!=0);
cin.ignore();
cin.get();
}


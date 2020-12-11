#include <iostream>
using namespace std;
int main(){
	int n,s=0,i=1;
	cout<<"Introduce un numero natural y te dire si es primo"<<endl;
	cin>>n;
	while(i<=n){
	if(n%i==0){
	s++;
}
	i++;
}
	if(s==2){
	cout<<"El numero es primo"<<n<<endl;
}
	else{
	cout<<"El numero no es primo"<<n<<endl;
}
cin.ignore();
cin.get();
}

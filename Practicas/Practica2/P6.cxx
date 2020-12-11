#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"Introduzca un numero"<<endl;
	cin>>n;
	int i=n;
 	while(i>0){
	if(n%i==0){
	cout<<i<<"Es divisor de:"<<n<<endl;
}
	i--;
}
cin.ignore();
cin.get();
}
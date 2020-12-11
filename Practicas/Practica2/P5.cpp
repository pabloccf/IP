#include <iostream>
using namespace std;
int main(){
	int n,i=1;
	cout<<"Introduce un numero y te dire sus divisores"<<endl;
	cin>>n;
	while(i<=n){
	if(n%i==0){
	cout<<i<<" es divisor de "<<n<<endl;
}
	i++;
}
cin.ignore();
cin.get();
}

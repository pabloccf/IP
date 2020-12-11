#include <iostream>
using namespace std;
int factorial(int v){
	int fact=1;
	for(int i=v;i>0;i--){
	fact=fact*i;
}
	return fact;
}
int main(){
	int n;
	cout<<"Introduce un numero y te hare su factorial"<<endl;
	cin>>n;

	cout<<"El factorial de "<<n<<" = "<<factorial(n)<<endl;
cin.ignore();
cin.get();
}

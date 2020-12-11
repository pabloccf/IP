#include <iostream>
using namespace std;
bool esprimo(int v){
	int ndiv=0;
	for(int i=1;i<=v;i++){
	if(v%i==0){
	ndiv++;
}
}
	return (ndiv==2);
}
void primos(int n){
	int count=0;
	int i=1;
	while(count!=n){
	if(esprimo(i)){
	count++;
	cout<<i<<endl;
}
i++;
}
}
int main(){
	int n;
	cout<<"Introduce un numero"<<endl;
	cin>>n;
	primos(n);
cin.ignore();
cin.get();
}

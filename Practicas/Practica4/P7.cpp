#include <iostream>
using namespace std;
int Ndivisores(int v){
	int ndiv=0;
	for(int i=1;i<=v;i++){
	if(v%i==0){
	ndiv++;
}
}
	return ndiv;
}
int main(){
	int n;
	cout<<"Introduce un numero"<<endl;
	cin>>n;
	cout<<n<<" tiene "<<Ndivisores(n)<<" divisores"<<endl;
cin.ignore();
cin.get();
}


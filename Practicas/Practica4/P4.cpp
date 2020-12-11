#include <iostream>
using namespace std;
void divisores(int v){
	for(int i=1;i<=v;i++){
	if(v%i==0){
	cout<<i<<endl;
}
}
}
int main(){
	int n;
	cout<<"Introduce un numero y te dire sus divisores en orden ascendente"<<endl;
	cin>>n;

	divisores(n);

return 0;
}


#include <iostream>
using namespace std;
int main(){
	int media=0;
	float n,ncopia;
	cout<<"Introduzca el numero de datos"<<endl;
	cin>>n;
	for(int i=0;i<n;i++){
	cout<<"Dime un numero";
	cin>>ncopia;
	media=media+ncopia;
}
	cout<<"La media es:"<<media/n<<endl;
cin.ignore();
cin.get();
}
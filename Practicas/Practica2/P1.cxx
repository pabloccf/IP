#include <iostream>
using namespace std;
int main(){
	int media=0,i=0;
	float n,ncopia;
	cout<<"Introduzca el numero de datos"<<endl;
	cin>>n;
	while(i<n)
{
	cout<<"Dime un numero";
	cin>>ncopia;
	media=media+ncopia;
	i++;
}
	cout<<"La media es:"<<media/n<<endl;
cin.ignore();
cin.get();
}
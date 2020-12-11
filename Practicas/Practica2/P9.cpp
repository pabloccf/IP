#include <iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"Introduce un numero y te hare la suma de los numero divisibles entre 2 y 3 hasta ese numero"<<endl;
	cin>>n;
	while(n>0){
	if(n%2==0||n%3==0){
	sum+=n;
}
	n--;
}
	cout<<"La suma es:"<<sum<<endl;
cin.ignore();
cin.get();
}
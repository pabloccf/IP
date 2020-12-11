#include <iostream>
using namespace std;
bool esperfecto(int v){
	int div=1,i;
	i=0;
	while(div<v){
	if(v%div==0){
	i=i+div;
}
	div++;
}
	if(i==v){
	return true;
}
	else{
	return false;
}
}
int main(){
	int n;
	cout<<"Introducce un numero y te digo si es perfecto o no"<<endl;
	cin>>n;
	if(esperfecto(n)==true){
	cout<<n<<" es perfecto"<<endl;
}
	else{
	cout<<n<<" no es perfecto"<<endl;
}
cin.ignore();
cin.get();
}


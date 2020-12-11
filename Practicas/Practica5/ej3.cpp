#include <cstdio>
#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
void fijavaloraleatorio(int v[],int n,int max){
	int secs=time(0);
	srand(secs);//inicializa el generador de numeros aleatorios
	for(int i=0;i<n;i++){
	v[i]=rand()%(max+1);
}
}
int main(){
	int max, n;
	cout<<"Introduzca el tamaño del vector"<<endl;
	cin>>n;
	int v[n];
	cout<<"Introduzca el valor maximo para los numeros aleatorios"<<endl;
	cin>>max;
	fijavaloraleatorio(v, n, max);
cin.ignore();
cin.get();
}
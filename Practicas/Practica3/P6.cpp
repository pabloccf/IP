#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
	srand(time(NULL));
	int secreto=rand()%1001;//Numero aleatorio entre 0 y 1000
	int g;//Intento del usuario
	do{
	cout<<"Introduce un numero"<<endl;
	cin>>g;
	if(g>secreto){
	cout<<"Muy grande, te has pasado. Intentelo de nuevo"<<endl;
	}
	else if(g<secreto){
	cout<<"Muy poco, te has quedado corto. Intentelo de nuevo"<<endl;
	}
}while(g !=secreto);
	cout<<"Acertaste!"<<endl;
cin.ignore();
cin.get();
}

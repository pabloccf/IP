#include <cctype>
#include <cmath>
#include <string>
#include <vector>
#include <iostream>
#include <fstream>
using namespace std;
struct Alumno {
    string dni;
    int edad;
    float nota;
};
bool dniesvalido(string &dni) {
    if(dni.size()!=9) {
        cout<<"Error. El DNI debe tener 9 caracteres"<<endl;
        return false;
    }
    for(int i=0; i<8; i++) {
        if(!isdigit(dni[i])) {
            cout<<"Error. Los primeros ocho caracteres del DNI deben ser numeros"<<endl;
            return false;
        }
    }
    dni[8]=toupper(dni[8]);
    int numero=stoi(dni);
    char letras[]="TRWAGMYFPDXBNJZSQVHLCKE";
    if(dni[8]!=letras[(numero%23)]) {
        cout<<"Error. La letra no corresponde con los digitos"<<endl;
        return false;
    }
    return true;
}
Alumno nuevoAlumno() {
    Alumno a;
    cout<<"Introduzca el DNI del alumno"<<endl;
    cin>>a.dni;
    while(dniesvalido(a.dni)==false) {
        cout<<"Introduzca el DNI de nuevo"<<endl;
        cin>>a.dni;
    }
    cout<<"Introduzca la edad del alumno"<<endl;
    cin>>a.edad;
    cout<<"Introduzca la nota del alumno"<<endl;
    cin>>a.nota;
    while(a.nota<0) {
        cout<<"La nota introducida debe estar en un intervalo entre 0 y 10"<<endl;
        cout<<endl;
        cout<<"Introduce de nuevo la nota correctamente"<<endl;
        cin>>a.nota;
    }
    while(a.nota>10) {
        cout<<"La nota introducida debe estar en un intervalo entre 0 y 10"<<endl;
        cout<<endl;
        cout<<"Introduce de nuevo la nota correctamente"<<endl;
        cin>>a.nota;
    }
    return a;
}
void printAlumno(string dni,int n,Alumno v[]) {
    int naux=0;
    for(int i=0; i<n&&naux==0; i++) {
        Alumno aux=v[i];
        if(dni==aux.dni) {
            cout<<"El DNI del alumno es: "<<aux.dni<<endl;
            cout<<"La edad del alumno es: "<<aux.edad<<endl;
            cout<<"La nota del alumno es: "<<aux.nota<<endl;
            naux=1;
        }
    }
    if(naux==0) {
        cout<<"El DNI introducido no esta registrado en la base de datos"<<endl;
    }
}
void printtodosAlumno(Alumno v[],int n) {
    for(int i=0; i<n; i++) {
        if(v[i].dni!="") {
            printAlumno(v[i].dni,n,v);
        }
    }
    cout<<"---------------------"<<endl;
}
int findAlumno(Alumno v[],int n,string dni) {
    for(int i=0; i<n; i++) {
        if(v[i].dni==dni) {
            return i;
        }
    }
    return -1;
}
bool addAlumno(Alumno v[],int n,Alumno a) {
    for(int i=0; i<n; i++) {
        if(v[i].dni=="") {
            v[i]=a;
            return true;
        }
    }
    return false;
}
void eliminarAlumno(Alumno v[],int n,int nalumno) {
    for(int i=nalumno; i<n-1; i++) {
        v[i]=v[i+1];
    }
}
int readFichero(string path,Alumno v[]){
	ifstream file;
	file.open(path);
		if(!file.is_open()){
			return -1;
		}
	int count=0;
		while(!file.eof()){
			Alumno aux;
			file>>aux.dni;
			file>>aux.edad;
			file>>aux.nota;
			v[count]=aux;
			count++;
		}
	file.close();
	return count;
}
bool saveFichero(string path,Alumno v[],int n){
	ofstream file;
	file.open(path);
		if(!file.is_open()){
			return false;
		}
		for(int i=0;i<n;i++){
			if(v[i].dni!=""){
				file<<v[i].dni<<endl;
				file<<v[i].edad<<endl;
				file<<v[i].nota<<endl;
			}
		}
	file.close();
	return true;
}
int main(int argc,char**argv){
		if(argc!=2){
			cout<<"Error. La cantidad de argumentos no es valida"<<endl;
			cout<<"Usage: "<<argv[0]<<" [file]"<<endl;
			return -1;
		}
	int vector_size=10;
	Alumno v[vector_size];
	string path=argv[1];
		if(readFichero(path,v)==-1){
			cout<<"Peligro: El fichero no ha sido encontrado asi que el programa empezara sin ningun alumno"<<endl;
		}
	int n=10;
	int opcion=0;
		while(opcion!=6) {
        		cout<<"Seleccione la opcion que desee realizar"<<endl;
       		cout<<endl;
      		cout<<"1. Añadir alumno"<<endl;
      		cout<<"2. Imprimir datos alumno"<<endl;
        		cout<<"3. Imprimir datos de todos los alumnos"<<endl;
        		cout<<"4. Modificar un alumno"<<endl;
        		cout<<"5. Eliminar a un alumno"<<endl;
        		cout<<"6. Salir"<<endl;
        		cin>>opcion;
        		switch (opcion) {
        			case 1: {
            		cout<<endl;
            		Alumno a=nuevoAlumno();
            			if(addAlumno(v,n,a)==false) {
                			cout<<"Error. El vector esta lleno"<<endl;
            			}
            		cout<<endl;
            		cin.ignore();
            		cin.get();
        			}
        			break;
        			case 2: {
            		cout<<endl;
            		int aux=0;
            		string dni;
            			do {
                		cout<<"Introduce el DNI del alumno"<<endl;
                		cin>>dni;
                			if(dniesvalido(dni)) {
                    			aux=1;
                			}
            			} while(aux==0);
            		printAlumno(dni,n,v);
            		cout<<endl;
            		cin.ignore();
            		cin.get();
       	 		}
        			break;
        			case 3: {
            		cout<<endl;
            		printtodosAlumno(v,n);
            		cout<<endl;
            		cin.ignore();
            		cin.get();
        			}
        			break;
        			case 4: {
            		cout<<endl;
            		string dnibusqueda;
            		cout<<"Introduzca el DNI del alumno que quiere modificar"<<endl;
            		cin>>dnibusqueda;
            		int i=findAlumno(v,n,dnibusqueda);
            		v[i]=nuevoAlumno();
            		cout<<endl;
            		cin.ignore();
            		cin.get();
        			}
        			break;
        			case 5: {
            		cout<<endl;
            		int aux=0;
            		string dni;
            			do {
                			cout<<"Introduce el DNI del alumno"<<endl;
                			cin>>dni;
                			if(dniesvalido(dni)) {
                    			aux=1;
                			}
            			} while(aux==0);
				int nalumno=findAlumno(v,n,dni);
            		eliminarAlumno(v,n,nalumno);
            		cout<<"El alumno ha sido eliminado con exito"<<endl;
            		cout<<endl;
            		cin.ignore();
            		cin.get();
        			}
        			break;
        		}
    		}
	if(!saveFichero(path,v,vector_size)){
		cout<<"Error. No se pudo guardar el archivo"<<endl;
	}
cin.ignore();
cin.get();
}
#include <cctype>
#include <cmath>
#include <string>
#include <vector>
#include <iostream>
using namespace std;
struct Alumno{
	string dni;
	int edad;
	float nota;
};
Alumno nuevoalumno(){
	cout<<"Introduzca el nombre y los apellidos del alumno"<<endl;
	Alumno nuevoalumno;
	cout<<"Introduzca el dni del alumno"<<endl;
	cin>>nuevoalumno.dni;
	cout<<"Introduzca la edad del alumno"<<endl;
	cin>>nuevoalumno.edad;
	cout<<"Introduzca la nota del alumno"<<endl;
	cin>>nuevoalumno.nota;
	return nuevoalumno;
}
void veralumno(int matriculados,string dni,Alumno alum[]){
	int aux=0;
	
#include <string>
#include <iostream>
#include <locale>
using namespace std;
void convierte_a_mayuscula(string&cad) {
    int s=cad.size();
    for(int i=0; i<s; i++) {
        cad[i]=toupper(cad[i]);
    }
}
int main() {
    string cad;
    cout<<"Introduce una frase y te convertire las letras minusculas en mayusculas y viceversa"<<endl;
    getline(cin,cad);
    convierte_a_mayuscula(cad);
    cout<<cad<<endl;
    cin.ignore();
    cin.get();
}
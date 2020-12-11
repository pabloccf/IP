#include <iostream>
#include <string>
using namespace std;
int espacios(string cad) {
    int count=0,s=cad.size();
    for(int i=0; i<s; i++) {
        if(cad[i]==' ') {
            count++;
        }
    }
    return count;
}
int main() {
    string cad;
    cout<<"Introduce una frase y te dire cuantos espacios hay en dicha frase:"<<endl;
    getline(cin,cad);
    cout<<espacios(cad)<<endl;
    cin.ignore();
    cin.get();
}


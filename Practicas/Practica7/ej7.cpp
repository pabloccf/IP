#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;
bool palindromo(string cad) {
    int s=cad.size();
    for(int i=0; i<s/2; i++) {
        if(cad[0+i]!=cad[s-1-i]) {
            return false;
        }
    }
    return true;
}
int main() {
    string cad;
    cout<<"Introduce una palabra y te dire si es un palindromo o no"<<endl;
    getline(cin,cad);
    if(palindromo(cad)) {
        cout<<"Es palindromo"<<endl;
    }
    else {
        cout<<"No es palindromo"<<endl;
    }
    cin.ignore();
    cin.get();
}

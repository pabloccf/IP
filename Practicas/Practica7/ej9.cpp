#include <iostream>
using namespace std;
int find(string a,string b) {
    int j=0;
    int start;
    for(int i=0; i<a.size(); i++) {
        if(a[i]==b[j]) {
            if(j==0) {
                start=i;
            }
            j++;
            if(j==b.size()) {
                return start;
            }
        }
        else {
            j=0;
        }
    }
    return -1;
}
int main() {
    string a,b;
    cout<<"Introduzca la primera frase"<<endl;
    getline(cin,a);
    cout<<"Introduzca la palabra o frase que quieras buscar en la primera frase"<<endl;
    getline(cin,b);
    cout<<find(a,b)<<endl;
    cin.ignore();
    cin.get();
}

#include <string>
#include <iostream>
using namespace std;
string concatena(string a,string b) {
    string res=a+b;
    return res;
}
int main() {
    string a,b;
    cout<<"Introduce una frase"<<endl;
    getline(cin,a);
    cout<<"Introduce una segunda frase"<<endl;
    getline(cin,b);
    cout<<concatena(a,b)<<endl;
cin.ignore();
cin.get();
}
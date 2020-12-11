#include <string>
#include <iostream>
using namespace std;
string concatena(string a,string b){
	string res=a+b;
	return res;
}
int main(){
	string a,b;
	getline(cin,a);
	getline(cin,b);
	cout<<concatena(a,b)<<endl;
cin.ignore();
cin.get();
}
#include <iostream>
using namespace std;
int main(){
	int a,b,c,d,e;
	cout<<"Introduce 5 numeros y te digo el menor"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	cin>>d;
	cin>>e;
	while((a>0)&&(b>0)&&(c>0)&&(d>0)&&(e>0)){
	a--;
	b--;
	c--;
	d--;
	e--;
	if(a==0){cout<<"El primer numero es el mas pequeño"<<endl;
}
	if(b==0){cout<<"El segundo numero es el mas pequeño"<<endl;
}
	if(c==0){cout<<"El tercer numero es el mas pequeño"<<endl;
}
	if(d==0){cout<<"El cuarto numero es el mas pequeño"<<endl;
}
	if(e==0){cout<<"El quinto numero es el mas pequeño"<<endl;
}
}

cin.ignore();
cin.get();
}
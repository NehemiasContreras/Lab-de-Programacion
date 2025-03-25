#include<iostream>
using namespace std;

int main(){
	int a,b,c,resultado;
	
	cout<<"Ingrese tres numeros:";
	cin>>a;
	cout<<"";
	cin>>b;
	cout<<"";
	cin>>c;
	cout<<"";
	resultado=(a,b,c);
	if(resultado<10){
	cout<<"Todos los numeros son menores a diez";
	}
	else if(resultado>10){
		cout<<"ok";
	}
	
	return 0;
}

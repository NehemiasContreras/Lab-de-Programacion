#include<iostream>
using namespace std;
int main(){
	int nota1,nota2,nota3,prom;
	
	cout<<"Ingrese la primer nota:";
	cin>>nota1;
	cout<<"Ingrese la segunda nota:";
	cin>>nota2;
	cout<<"Ingrese la tercer nota:";
	cin>>nota3;
	
	
	prom=(nota1+nota2+nota3)/3;
	if(prom>=7){
		cout<<"Aprobado";
	}
	else if(prom<=4){
	cout<<"Reprobado";
     
	}
	return 0;
}

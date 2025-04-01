#include<iostream>
using namespace std;
int main(){
	int a,b,porcentaje,maximo,medio,regular,fueradenivel;
	cout<<"Cuantas preguntas tuvo en el examen?"<<endl;
	cin>>a;
	cout<<"Cuantas respondio correctamente?"<<endl;
	cin>>b;
	porcentaje=(a/b)*100;
	maximo=(porcentaje>=9);
	medio=(porcentaje>=7 && porcentaje<9);
	regular=(porcentaje>=5 && porcentaje<7);
	fueradenivel=(porcentaje<5);
	
	if(maximo){
		cout<<"Tu nota es 'maxima'";
	}
	else if(medio){
		cout<<"Tu nivel es 'medio'";
	}
	else if(regular){
		cout<<"Tu nivel es 'regular'";
	}
	else if(fueradenivel){
		cout<<"Tu nota esta 'fuera de nivel'";
	}
	
	return 0;
}

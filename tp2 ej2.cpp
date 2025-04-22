#include<iostream>
using namespace std;
int main(){
	int vector [4] = {10,5,9,2};
	int suma=0;
	int promedio;
	
	for(int i =0; i<4 ;i++){
		suma+=vector[i];
	}
	promedio=(int)suma/4;
	
	cout<<"La suma y el promedio de los numeros enteros es:"<<promedio<<endl;
	return 0;
}

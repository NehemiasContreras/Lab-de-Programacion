#include <iostream>
using namespace std;
int main() {
    int a;
    cout<<"Ingrese un numero entero positivo de hasta tres cifras: " << endl;
    cin>>a;
    
    if (a>=1 && a<=9) {
        cout<<"El numero tiene 1 cifra."<<endl;
    } else if (a>=10 && a<=99) {
        cout << "El numero tiene 2 cifras." << endl;
    } else if (a>=100 && a<=999) {
        cout << "El numero tiene 3 cifras." << endl;
    } else {
        cout << "Error: el numero tiene mas de 3 cifras o es negativo." <<endl;
    }
    
    return 0;
}


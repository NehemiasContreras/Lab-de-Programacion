#include <iostream>
using namespace std;
int main() {
    int opcion;
    float saldo =1000;
    float monto;

    do {
        cout<<"Cajero Automatico"<<endl;
        cout<<"1. Ver saldo"<<endl;
        cout<<"2. Depositar dinero"<<endl;
        cout<< "3. Retirar dinero"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Seleccione una opción: "<<endl;
        cin>>opcion;

        switch(opcion){
            case 1:
                cout<<"Su saldo actual es: $"<<saldo<<endl;
                break;

            case 2:
                cout<<"Ingrese el monto a depositar: $";
                cin>>monto;
                if (monto > 0) {
                    saldo += monto;
                    cout<<"Deposito exitoso. Nuevo saldo: $" <<saldo<<endl;
                } else {
                    cout<<"Monto invalido.";
                }
                break;

            case 3:
                cout<<"Ingrese el monto a retirar: $";
                cin>>monto;
                if (monto > 0 && monto <= saldo) {
                    saldo -= monto;
                    cout<<"Retiro exitoso. Nuevo saldo: $" <<saldo<<endl;
                } else {
                    cout<<"Fondos insuficientes o monto invalido";
                }
                break;

            case 4:
                cout<<"Gracias por usar el cajero.";
                break;

            default:
                cout<<"Opción invalida";
        }

    } while(opcion != 4);

    return 0;
}


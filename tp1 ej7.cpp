#include <iostream>
using namespace std;
void mostrarmenu() {
    cout << "Cajero Automatico"<<endl;
    cout<< "1. Ver saldo" <<endl;
    cout<< "2. Depositar dinero" << endl;
    cout << "3. Retirar dinero" << endl;
    cout <<"4. Salir" << endl;
    cout<< "Seleccione una opcion: ";
}

void versaldo(float saldo) {
    cout << "Su saldo actual es: $" << saldo << endl;
}

void depositardinero(float &saldo) {
    float monto;
    cout << "Ingrese el monto a depositar: $";
    cin >> monto;
    if (monto > 0) {
        saldo += monto;
        cout << "Deposito exitoso. Nuevo saldo: $" << saldo << endl;
    } else {
        cout << "Monto invalido." << endl;
    }
}

void retirardinero(float &saldo) {
    float monto;
    cout << "Ingrese el monto a retirar: $";
    cin >> monto;
    if (monto > 0 && monto <= saldo) {
        saldo -= monto;
        cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
    } else {
        cout << "Fondos insuficientes o monto invalido" << endl;
    }
}

int main() {
    int opcion;
    float saldo = 1000;

    do {
        mostrarmenu();
        cin >> opcion;

        switch(opcion) {
            case 1:
                versaldo(saldo);
                break;
            case 2:
                depositardinero(saldo);
                break;
            case 3:
                retirardinero(saldo);
                break;
            case 4:
                cout << "Gracias por usar el cajero." << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
        }

    } while(opcion != 4);

    return 0;
}



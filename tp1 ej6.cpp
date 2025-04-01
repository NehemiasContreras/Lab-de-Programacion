#include<iostream>
using namespace std;
int main() {
	int a;
	float precioentrada=150000;
	float preciofinal;
	cout<<"                                    BIENVENIDO AL SHOW DE AIRBAG-RIVER 2025";
    cout <<      "                                                                 \n"
                 "                         .:  .:  .:..........:: .:..........::.        :.                 .:.       \n"
                 "                         ::  .:  .:         .:. .:         .:.        .:.                 ::        \n"
                 "                        :::  .:  .:         :.  .:         ::        .::.                ::         \n"
                 "                       ::::  .:  .:        ::   .:        ::        .:.:.               .:.         \n"
                 "                      .:..:  .:  .:.      .:.   .:       ::         :: :.              .:.          \n"
                 "                     .:. .:  .:  .::     .:.    .:      .:.        ::  :.              :.           \n"
                 "                    .:.  .:  .:  .::.    ::     .:     .:.        ::   :.             ::            \n"
                 "                    ::   .:  .:  .:::   .:      .:    .:.        .:.   :.            ::             \n"
                 "                   ::    .:  .:  .:.:. .:.      .:....::......  .:.    :.           .:.             \n"
                 "                  .:     .:  .:  .: .:.:.       .::::::::::::.  :.     :.          .:.              \n"
                 "                 .:.     .:  .:  .:  :::        .:  ::     ::  ::      :.          ::               \n"
                 "                .:.      .:  .:  .:  .:.        .: .:.    ::  ::       :.         ::                \n"
                 "                :.       .:  .:  .: .:::        .:::.    ::  .:.       :.        .:.                \n"
                 "               ::        .:  .:  .: ::.:.       .::.    .:  .:.        :.       .:.      ....       \n"
                 "              ::         .:  .:  .:::  .:       .:.    .:.  :.         :.       :.      .::::       \n"
                 "             .:.         .:  .:  .::.   ::      .:    .:.  ::          :.      ::          .:       \n"
                 "            .:.          .:  .:  .::    .:.     .:   .:.  ::           :.     ::           .:       \n"
                 "           .:.           .:  .:  .:      ::     .:  .:.  .:.           :.    .:.           .:       \n"
                 "           ::            .:  .:  .:      .:.    .:  ::  .:.            :.   .:.            .:       \n"
                 "          ::             .:  .:  .:       .:    .:.::  .:.             :.   ::             .:       \n"
                 "         .:              .:  .:  .:        :.   .:::   ::              :.  ::              .:       \n"
                 "        .:.              .:  .:  .:        .:   .::   ::               :. .:               .:       \n"
                 "       .:.               ::  .:  .:         ::  .:.  .:               .:..:.               ::       \n"
                 "       :.         .::::::::  .:  .:         .:. ..  .:.         ::::::::.::::::::::::::::::::       \n"<<endl;
                 cout<<"Quiere comprar entradas? SOLO QUEDAN 4!!"<<endl;
                 cout<<"TIENEN UN VALOR DE 150.000 POR PERSONA, PERO HAY PROMOS!!!!"<<endl;
                 cout<<"1. Al comprar 2 entradas hay un 10% de descuento"<<endl;
                 cout<<"2. Al comprar 3 entradas hay un 15% de descuento"<<endl;
                 cout<<"3. Al comprar 4 entradas hay un 20% de descuento"<<endl;
                 cout<<"Elija la opcion:"<<endl;
                 cin>>a;
                 switch(a) {
        case 1:
            preciofinal = 2 * precioentrada*0.9;
            cout<< "El precio final por 2 entradas es: "<<preciofinal<<endl;
            break;
        case 2:
            preciofinal = 3 * precioentrada *0.85;
            cout << "El precio final por 3 entradas es: "<<preciofinal<<endl;
            break;
        case 3:
            preciofinal = 4 * precioentrada *0.8;
            cout<<"El precio final por 4 entradas es: "<<preciofinal<<endl;
            break;
        default:
            cout<<"Opcion no valida, por favor elija una opcion correcta."<<endl;
            break;
    }
                 
            

    return 0;
}

